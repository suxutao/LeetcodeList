#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
    int dp[505][505][3]{};
class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {
        int m=coins.size(),n=coins[0].size();
        dp[0][0][0]=coins[0][0];
        dp[0][0][1]=max(0,coins[0][0]);
        dp[0][0][2]=dp[0][0][1];
        for (int i = 1; i < m; ++i) {
            for (int k = 0; k < 3; ++k) {
                dp[i][0][k]=coins[i][0]+dp[i-1][0][k];
            }
            if (coins[i][0]<0){
                dp[i][0][1]= max(dp[i][0][1],dp[i-1][0][0]);
                dp[i][0][2]= max(dp[i][0][2],dp[i-1][0][1]);
            }
        }
        for (int i = 1; i < n; ++i) {
            for (int k = 0; k < 3; ++k) {
                dp[0][i][k]=coins[0][i]+dp[0][i-1][k];
            }
            if (coins[0][i]<0){
                dp[0][i][1]= max(dp[0][i][1],dp[0][i-1][0]);
                dp[0][i][2]= max(dp[0][i][2],dp[0][i-1][1]);
            }
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                for (int k = 0; k < 3; ++k) {
                    dp[i][j][k]=coins[i][j]+max(dp[i-1][j][k],dp[i][j-1][k]);
                }
                if (coins[i][j]<0){
                    dp[i][j][1]= max(dp[i][j][1], max(dp[i-1][j][0],dp[i][j-1][0]));
                    dp[i][j][2]= max(dp[i][j][2], max(dp[i-1][j][1],dp[i][j-1][1]));
                }
            }
        }
        return max({dp[m-1][n-1][0],dp[m-1][n-1][1],dp[m-1][n-1][2]});
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}