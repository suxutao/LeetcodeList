#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>v;
    queue<pair<int,int>>q;
    int bfs(int x,int y,vector<vector<int>>& t){
        int a,b,c=0;
        q.push({x,y});
        while (!q.empty()){
            a=q.front().first;
            b=q.front().second;
            v[a][b]=1;
            if (a+1<t.size()&&t[a+1][b]==1&&!v[a+1][b]) {
                q.push({a + 1, b});
                v[a+1][b]=1;
            }
            if (b+1<t[0].size()&&t[a][b+1]==1&&!v[a][b+1]) {
                q.push({a, b + 1});
                v[a][b+1]=1;
            }
            if (a-1>=0&&t[a-1][b]==1&&!v[a-1][b]) {
                q.push({a - 1, b});
                v[a-1][b]=1;
            }
            if (b-1>=0&&t[a][b-1]==1&&!v[a][b-1]) {
                q.push({a, b - 1});
                v[a][b-1]=1;
            }
            q.pop();c++;
        }
        return c;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        v.assign(grid.size(),vector<int>(grid[0].size(),0));
        int ans=0;
        for (int i = 0; i < grid.size(); ++i) {
            if (grid[i][0]==1&&!v[i][0])
                bfs(i,0,grid);
            if (grid[i][grid[0].size()-1]==1&&!v[i][grid[0].size()-1])
                bfs(i,grid[0].size()-1,grid);
        }
        for (int i = 0; i < grid[0].size(); ++i) {
            if (grid[0][i]==1&&!v[0][i])
                bfs(0,i,grid);
            if (grid[grid.size()-1][i]==1&&!v[grid.size()-1][i])
                bfs(grid.size()-1,i,grid);
        }
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j]==1&&!v[i][j])
                    ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}