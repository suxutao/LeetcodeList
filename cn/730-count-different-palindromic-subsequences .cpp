#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int countPalindromicSubsequences(string s) {
        int n=s.size();
        vector<vector<ll>>dp(n,vector<ll>(n));
        for (int i = 0; i < n; ++i) {
            dp[i][i]=1;
        }
        for (int l = 2; l <= n; ++l) {
            for (int i = 0; i <= n - l; ++i) {
                int j=l+i-1;
                if (s[i]==s[j]){
                    int left=i+1,right=j-1;
                    while (left<j&&s[left]!=s[i]){
                        left++;
                    }
                    while (right>i&&s[right]!=s[i]){
                        right--;
                    }
                    if (right<left){
                        dp[i][j]=(2*dp[i+1][j-1]+2)%N;
                    }else if (right==left){
                        dp[i][j]=(2*dp[i+1][j-1]+1)%N;
                    }else{
                        dp[i][j]=(2*dp[i+1][j-1]-dp[left+1][right-1])%N;
                    }
                }else{
                    dp[i][j]=(dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1])%N;
                }
                dp[i][j]=(dp[i][j]+N)%N;
            }
        }
        return dp[0][n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}