#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int numDecodings(string s) {
        if (s[0]=='0')
            return 0;
        int n=s.size();
        vector<ll>dp(n+1);
        dp[0]=1;dp[1]=s[0]=='*'?9:1;
        for (int i = 2; i <= n; ++i) {
            if (s[i-1]=='0'){
                if (s[i-2]=='*')
                    dp[i]=dp[i-2]*2%N;
                else if (s[i-2]>'2'||s[i-2]=='0')
                    return 0;
                else
                    dp[i]=dp[i-2];
            }else if (s[i-1]=='*'){
                if (s[i-2]=='*')
                    dp[i]=(9*dp[i-1]+15*dp[i-2])%N;
                else if (s[i-2]=='1')
                    dp[i]=(9*dp[i-1]+9*dp[i-2])%N;
                else if (s[i-2]=='2')
                    dp[i]=(9*dp[i-1]+6*dp[i-2])%N;
                else
                    dp[i]=9*dp[i-1]%N;
            }else{
                if (s[i-2]=='*'){
                    if (s[i-1]>'6')
                        dp[i]=(dp[i-1]+dp[i-2])%N;
                    else
                        dp[i]=(dp[i-1]+2*dp[i-2])%N;
                }else{
                    if (s[i-2]>'2'||s[i-1]>'6'&&s[i-2]=='2'||s[i-2]=='0'){
                        dp[i]=dp[i-1];
                    }else{
                        dp[i]=(dp[i-1]+dp[i-2])%N;
                    }
                }
            }
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}