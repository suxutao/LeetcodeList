#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<ll>dp(high+1);
        dp[0]=1;
        ll ans=0;
        for (int i = 1; i <= high; ++i) {
            if (i>=zero&&i>=one)
                dp[i]=(dp[i-zero]+dp[i-one])%N;
            else if (i>=zero)
                dp[i]=dp[i-zero];
            else if (i>=one)
                dp[i]=dp[i-one];
            if (i>=low)
                ans+=dp[i];
        }
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}