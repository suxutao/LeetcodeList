#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkPartitioning(string s) {
        int n=s.size();
        vector<vector<bool>>dp(n,vector<bool>(n));
        for (int i = 0; i < n; ++i) {
            dp[i][i]=1;
            if (i&&s[i]==s[i-1])
                dp[i-1][i]=1;
        }
        for (int l = 3; l <= n; ++l) {
            for (int i = 0; i <= n - l; ++i) {
                int j=i+l-1;
                if (s[i]==s[j])
                    dp[i][j]=dp[i+1][j-1];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n-1; ++j) {
                if (dp[0][i]&&dp[i+1][j]&&dp[j+1][n-1])
                    return true;
            }
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}