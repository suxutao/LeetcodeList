#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>v;
    queue<pair<int,int>>q;
    void bfs(int x,int y,vector<vector<char>>& t){
        int a,b;
        q.push({x,y});
        while (!q.empty()){
            a=q.front().first;
            b=q.front().second;
            v[a][b]=1;
            if (a+1<t.size()&&t[a+1][b]=='1'&&!v[a+1][b]) {
                q.push({a + 1, b});
                v[a+1][b]=1;
            }
            if (b+1<t[0].size()&&t[a][b+1]=='1'&&!v[a][b+1]) {
                q.push({a, b + 1});
                v[a][b+1]=1;
            }
            if (a-1>=0&&t[a-1][b]=='1'&&!v[a-1][b]) {
                q.push({a - 1, b});
                v[a-1][b]=1;
            }
            if (b-1>=0&&t[a][b-1]=='1'&&!v[a][b-1]) {
                q.push({a, b - 1});
                v[a][b-1]=1;
            }
            q.pop();
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        v.assign(grid.size(),vector<int>(grid[0].size(),0));
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (v[i][j]||grid[i][j]=='0')
                    continue;
                bfs(i,j,grid);
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<char>>c={{'1','1','0','0','0'}, {'1','1','0','0','0'}, {'0','0','1','0','0'}, {'0','0','0','1','1'}};
    Solution().numIslands(c);
    return 0;
}