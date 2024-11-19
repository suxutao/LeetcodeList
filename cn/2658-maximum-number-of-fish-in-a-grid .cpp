#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int m,n;
    vector<vector<bool>>vis;
    int arr[4][2]={{1,0},{0,1},{0,-1},{-1,0}};
    int dfs(int x,int y,vector<vector<int>>&v){
        if (x<0||y<0||x>=m||y>=n||vis[x][y]||v[x][y]==0)
            return 0;
        int ans=v[x][y];
        vis[x][y]=1;
        for (auto &[a,b]: arr){
            ans+= dfs(a+x,b+y,v);
        }
        return ans;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        m=grid.size(),n=grid[0].size();
        vis.assign(m,vector<bool>(n));
        int ans=0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]&&!vis[i][j])
                    ans= max(ans, dfs(i,j,grid));
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}