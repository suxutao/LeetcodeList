#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumCoins(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,INT_MAX/2));
        dp[1][1]=prices[0];dp[1][0]=prices[0];
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j < i; ++j) {
                if (j*2>=i){
                    dp[i][0]= min(dp[i][0],dp[j][1]);
                }
                dp[i][1]= min(dp[i-1][0],dp[i-1][1])+prices[i-1];
            }
        }
        return min(dp[n][0],dp[n][1]);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}