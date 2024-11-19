#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
    int m,n;
    vector<vector<bool>>vis;
    bool dfs(int x,int y,vector<vector<int>>&v){
        if (x<0||y<0||x>=m||y>=n)
            return false;
        if (v[x][y]||vis[x][y])
            return true;
        bool vb=true;
        vis[x][y]=1;
        for (auto &[a,b]: arr){
            vb&=dfs(a+x,b+y,v);
        }
        return vb;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        m=grid.size(),n=grid[0].size();
        vis.assign(m,vector<bool>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!grid[i][j]&&!vis[i][j]){
                    ans+=dfs(i,j,grid);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}