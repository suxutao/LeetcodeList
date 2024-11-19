#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int countVowelPermutation(int n) {
        vector<ll>dp(5,1),ndp(5);
        for (int i = 1; i < n; ++i) {
            ndp[0]=(dp[1]+dp[2]+dp[4])%N;
            ndp[1]=(dp[0]+dp[2])%N;
            ndp[2]=(dp[1]+dp[3])%N;
            ndp[3]=(dp[2])%N;
            ndp[4]=(dp[3]+dp[2])%N;
            dp=ndp;
        }
        return accumulate(dp.begin(), dp.end(),0ll)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}