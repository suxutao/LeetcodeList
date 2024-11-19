#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int strangePrinter(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        for (int i = 0; i < n; ++i) {
            dp[i][i]=1;
        }
        for (int l = 2; l <= n; ++l) {
            for (int i = 0; i <= n-l; ++i) {
                int j=i+l-1;
                if (s[i]==s[j]){
                    dp[i][j]=dp[i][j-1];
                }else{
                    for (int k = i; k < j; ++k) {
                        dp[i][j]= min(dp[i][j],dp[i][k]+dp[k+1][j]);
                    }
                }
            }
        }
        return dp[0][n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}