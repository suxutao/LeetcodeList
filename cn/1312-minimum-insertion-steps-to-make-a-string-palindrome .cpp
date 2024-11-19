#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n));
        for (int i = 1; i < n; ++i) {
            dp[i-1][i]=s[i-1]!=s[i];
        }
        for (int l = 3; l <= n; ++l) {
            for (int i = 0; i <= n - l; ++i) {
                int j=i+l-1;
                if (s[i]==s[j])
                    dp[i][j]=dp[i+1][j-1];
                else
                    dp[i][j]= min(1+dp[i+1][j],1+dp[i][j-1]);
            }
        }
        return dp[0][n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}