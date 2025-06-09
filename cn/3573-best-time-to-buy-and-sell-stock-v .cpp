#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumProfit(vector<int>& prices, int k) {
        ll n=prices.size();
        vector<array<ll,3>>dp(k+2,{LLONG_MIN/2,LLONG_MIN/2,LLONG_MIN/2});
        for (int i = 1; i <= k + 1; ++i) {
            dp[i][0]=0;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = k + 1; j; --j) {
                dp[j][0]= max(dp[j][0],max(dp[j][1]+prices[i],dp[j][2]-prices[i]));
                dp[j][1]= max(dp[j][1],dp[j-1][0]-prices[i]);
                dp[j][2]= max(dp[j][2],dp[j-1][0]+prices[i]);
            }
        }
        return dp[k+1][0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{12,16,19,19,8,1,19,13,9};
    Solution().maximumProfit(v,3);
    return 0;
}