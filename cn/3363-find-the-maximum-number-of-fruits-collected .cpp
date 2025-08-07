#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxCollectedFruits(vector<vector<int>>& fruits) {
        int n=fruits.size(),sum=0;
        vector<vector<int>>dp(n,vector<int>(n,INT_MIN));
        for (int i = 0; i < n; ++i) {
            sum+=fruits[i][i];
            dp[i][i]=0;
        }
        dp[n-1][0]=fruits[n-1][0];
        dp[0][n-1]=fruits[0][n-1];
        for (int i = 1; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]);
                if (j+1<n)
                    dp[i][j]= max(dp[i][j],dp[i-1][j+1]);
                dp[i][j]+=fruits[i][j];
            }
        }
        for (int i = 1; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                dp[j][i]=max(dp[j][i-1],dp[j-1][i-1]);
                if (j+1<n)
                    dp[j][i]= max(dp[j][i],dp[j+1][i-1]);
                dp[j][i]+=fruits[j][i];
            }
        }
        return sum+dp[n-1][n-2]+dp[n-2][n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}