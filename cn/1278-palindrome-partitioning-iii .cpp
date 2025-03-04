#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int palindromePartition(string s, int k) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(k+1,INT_MAX)),cost(n,vector<int>(n));
        for (int l = 2; l <= n; ++l) {
            for (int i = 0; i <= n - l; ++i) {
                int j=i+l-1;
                cost[i][j]+=(s[i]!=s[j])+cost[i+1][j-1];
            }
        }
        dp[0][0]=0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= min(i, k); ++j) {
                if (j==1){
                    dp[i][1]=cost[0][i-1];
                }else{
                    for (int m = j-1; m < i; ++m) {
                        dp[i][j]= min(dp[i][j],dp[m][j-1]+cost[m][i-1]);
                    }
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