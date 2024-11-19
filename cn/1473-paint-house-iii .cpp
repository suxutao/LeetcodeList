#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        vector<vector<vector<int>>>dp(m+1,vector<vector<int>>(n,vector<int>(target+1,INT_MAX/2)));
        for (int i = 0; i < n; ++i) {
            dp[0][i][0]=0;
        }
        for (int i = 1; i <= m; ++i) {
            if (houses[i-1]){
                for (int k = 1; k <= min(i,target); ++k) {
                    dp[i][houses[i-1]-1][k]=dp[i-1][houses[i-1]-1][i==1?k-1:k];
                    for (int j = 0; j < n; ++j) {
                        if (houses[i-1]-1==j)
                            continue;
                        dp[i][houses[i-1]-1][k]=min(dp[i][houses[i-1]-1][k],dp[i-1][j][k-1]);
                    }
                }
            }else{
                for (int j = 0; j < n; ++j) {
                    for (int k = 1; k <= target; ++k) {
                        dp[i][j][k]=dp[i-1][j][i==1?k-1:k]+cost[i-1][j];
                        for (int l = 0; l < n; ++l) {
                            if (j==l)
                                continue;
                            dp[i][j][k]=min(dp[i][j][k],dp[i-1][l][k-1]+cost[i-1][j]);
                        }
                    }
                }
            }
        }
        int ans=INT_MAX/2;
        for (int i = 0; i < n; ++i) {
            ans=min(ans,dp[m][i][target]);
        }
        return ans==INT_MAX/2?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{0};
    vector<vector<int>>vv{{2}};
    cout<<Solution().minCost(v,vv,1,1,1);
    return 0;
}