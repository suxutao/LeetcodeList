#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
    int m,n;
    bool f1(vector<vector<int>>& g){
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (g[i][j])
                    return false;
            }
        }
        return true;
    }
    bool f2(vector<vector<int>>& g){
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!g[i][j])
                    return false;
            }
        }
        return true;
    }
    int maxDistance(vector<vector<int>>& grid) {
        m=grid.size(),n=grid[0].size();
        int cnt=-1;bool ba=f1(grid),bb=f2(grid);
        if (ba||bb)
            return -1;
        vector<vector<bool>>vis(m,vector<bool>(n));
        queue<int>q;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j])
                    q.push(i<<16|j);
            }
        }
        while (!q.empty()){
            int sz=q.size();
            for (int i = 0; i < sz; ++i) {
                int x=q.front()>>16,y=q.front()<<16>>16;
                q.pop();
                for (auto [a,b]: arr){
                    a+=x;b+=y;
                    if (a<0||b<0||a>=m||b>=n||vis[a][b]||grid[a][b])
                        continue;
                    vis[a][b]=1;
                    q.push(a<<16|b);
                }
            }
            cnt++;
        }
        return cnt;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}