#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double largestSumOfAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<double>>dp(n+1,vector<double>(k+1));
        vector<double>sum(n+1);
        for (int i = 0; i < n; ++i) {
            sum[i+1]=sum[i]+nums[i];
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= min(i,k); ++j) {
                for (int l = j-1; l < i; ++l) {
                    if (j==1)
                        dp[i][j]= sum[i]/i;
                    else
                        dp[i][j]= max(dp[i][j],dp[l][j-1]+(sum[i]-sum[l])/(i-l));
                }
            }
        }
        return dp[n][k];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}