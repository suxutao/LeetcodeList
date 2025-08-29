#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCost(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size(),mx=0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                mx= max(mx,grid[i][j]);
            }
        }
        vector<int>suf(mx+2,INT_MAX),mn(mx+1),dp(n+1);
        for (int l = 0; l <= k; ++l) {
            ranges::fill(mn,INT_MAX);
            ranges::fill(dp,INT_MAX/2);
            dp[1]=-grid[0][0];
            for (int i = 1; i <= m; ++i) {
                for (int j = 1; j <= n; ++j) {
                    int x=grid[i-1][j-1];
                    dp[j]= min(min(dp[j],dp[j-1])+x,suf[x]);
                    mn[x]= min(mn[x],dp[j]);
                }
            }
            for (int i = mx; i >= 0; --i) {
                suf[i]= min(suf[i+1],mn[i]);
            }
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}