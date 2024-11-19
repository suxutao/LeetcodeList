#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxPalindromes(string s, int k) {
        if (k==1)
            return s.size();
        int n=s.size();
        vector<vector<bool>>vb(n,vector<bool>(n));
        vector<int>dp(n);
        for (int i = 0; i < n; ++i) {
            vb[i][i]=1;
            if (i!=n-1)
                vb[i][i+1]=s[i]==s[i+1];
        }
        for (int i = 2; i < n; ++i) {
            for (int j = i-2; j >= 0; --j) {
                if (s[i]==s[j]){
                    vb[j][i]=vb[j][i]|vb[j+1][i-1];
                }
            }
        }
        for (int i = k-1; i < n; ++i) {
            dp[i]=dp[i-1];
            for (int j = i-k+1; j >= 0; --j) {
                if (vb[j][i]){
                    if (j==0)
                        dp[i]= max(dp[i],1);
                    else
                        dp[i]= max(dp[i],dp[j-1]+1);
                    break;
                }
            }
        }
        return dp[n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}