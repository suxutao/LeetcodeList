#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int numberOfArrays(string s, int k) {
        ll n=s.size();
        vector<ll>dp(n+1);
        dp[0]=1;
        for (int i = 1; i <= n; ++i) {
            ll temp=0,base=1;
            for (int j = i-1; j >= 0&&i-j<=10; --j) {
                temp+=(s[j]-'0')*base;
                if (temp>k)
                    break;
                if (s[j]!='0'){
                    dp[i]=(dp[j]+dp[i])%N;
                }
                base*=10;
            }
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}