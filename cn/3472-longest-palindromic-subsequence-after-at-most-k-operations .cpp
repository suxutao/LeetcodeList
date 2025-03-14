#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int dis(char a,char b){
        return min(abs(a-b),26-abs(a-b));
    }
    int longestPalindromicSubsequence(string s, int k) {
        int n=s.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(n,vector<int>(k+1)));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= k; ++j) {
                dp[i][i][j]=1;
            }
        }
        for (int l = 2; l <= n; ++l) {
            for (int i = 0; i <= n - l; ++i) {
                int j=i+l-1;
                for (int m = 0; m <= k; ++m) {
                    dp[i][j][m]= max(dp[i+1][j][m],dp[i][j-1][m]);
                    int d= dis(s[i],s[j]);
                    if (d<=m){
                        dp[i][j][m]= max(dp[i][j][m],2+dp[i+1][j-1][m-d]);
                    }
                }
            }
        }
        return dp[0][n-1][k];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}