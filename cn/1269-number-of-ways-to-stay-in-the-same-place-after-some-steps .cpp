#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int numWays(int steps, int arrLen) {
        if (arrLen==1)
            return 1;
        arrLen=min(steps/2+1,arrLen);
        vector<ll>dp(arrLen),ndp(arrLen);
        dp[0]=1;
        for (int i = 0; i < steps; ++i) {
            ndp[0]=(dp[0]+dp[1])%N;
            for (int j = 1; j < arrLen-1; ++j) {
                ndp[j]=(dp[j-1]+dp[j]+dp[j+1])%N;
            }
            ndp[arrLen-1]=(dp[arrLen-2]+dp[arrLen-1])%N;
            dp=ndp;
        }
        return dp[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}