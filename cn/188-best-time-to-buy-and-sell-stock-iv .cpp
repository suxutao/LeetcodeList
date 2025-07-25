#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<array<int,2>>dp(k+2,{INT_MIN/2,INT_MIN/2});
        for (int i = 1; i <= k + 1; ++i) {
            dp[i][0]=0;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = k + 1; j; --j) {
                dp[j][0]= max(dp[j][0],dp[j][1]+prices[i]);
                dp[j][1]= max(dp[j][1],dp[j-1][0]-prices[i]);
            }
        }
        return dp[k+1][0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}