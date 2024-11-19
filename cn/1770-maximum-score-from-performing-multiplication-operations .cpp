#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size(),m=multipliers.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1));
        for (int i = 1; i <= m; ++i) {
            dp[i][0]=dp[i-1][0]+nums[i-1]*multipliers[i-1];
            dp[0][i]=dp[0][i-1]+nums[n-i]*multipliers[i-1];
        }
        int ans= max(dp[m][0],dp[0][m]);
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= m-i; ++j) {
                dp[i][j]=max(dp[i-1][j]+nums[i-1]*multipliers[i+j-1],dp[i][j-1]+nums[n-j]*multipliers[i+j-1]);
            }
            ans= max(ans,dp[i][m-i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}