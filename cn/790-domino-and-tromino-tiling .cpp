#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int numTilings(int n) {
        vector<long long>dp(n+1);
        dp[1]=1;dp[2]=2;dp[0]=1;
        for (int i = 3; i <= n; ++i) {
            dp[i]=(2*dp[i-1]+dp[i-3])%N;
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}