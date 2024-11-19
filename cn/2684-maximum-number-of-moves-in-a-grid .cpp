#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<bool, int>;
    vector<vector<pii>>vv;
    int m,n;
    int dfs(vector<vector<int>>&v,int x,int y){
        if (vv[x][y].first){
            return vv[x][y].second;
        }
        vv[x][y].first= true;
        int ans=0;
        if (y+1<n&&x+1<m&&v[x][y]<v[x+1][y+1])
            ans= max(ans, 1+dfs(v,x+1,y+1));
        if (y+1<n&&v[x][y]<v[x][y+1])
            ans= max(ans, 1+dfs(v,x,y+1));
        if (y+1<n&&x-1>=0&&v[x][y]<v[x-1][y+1])
            ans= max(ans, 1+dfs(v,x-1,y+1));
        vv[x][y].second=ans;
        return ans;
    }
    int maxMoves(vector<vector<int>>& grid) {
        m=grid.size(),n=grid[0].size();
        vv.assign(m,vector<pii>(n,{0,0}));
        int ans=0;
        for (int j = 0; j < m; ++j) {
            if (!vv[j][0].first){
                ans= max(dfs(grid,j,0),ans);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}