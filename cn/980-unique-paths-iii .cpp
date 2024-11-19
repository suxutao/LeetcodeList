#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int cnt=0,ans=0,m,n;
    int arr[4][2]{{0,1},{1,0},{-1,0},{0,-1}};
    vector<vector<bool>>vis;
    void dfs(vector<vector<int>>& g,int x,int y,int c){
        if (g[x][y]==2){
            if (cnt==c-1)
                ans++;
            return;
        }
        for (auto [a,b]: arr){
            a+=x;b+=y;
            if (a<0||b<0||a>=m||b>=n||vis[a][b]||g[a][b]==-1)
                continue;
            vis[a][b]=1;
            dfs(g,a,b,c+1);
            vis[a][b]=0;
        }
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int x,y;
        m=grid.size(),n=grid[0].size();
        vis.assign(m,vector<bool>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]==0)
                    cnt++;
                if (grid[i][j]==1)
                    x=i,y=j;
            }
        }
        vis[x][y]=1;
        dfs(grid,x,y,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{1,0},{2,0}};
    Solution().uniquePathsIII(v);
    return 0;
}