#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<int>dp(n+1);
        dp[1]=1;
        for (int i = 2; i <= n; ++i) {
            long long temp=dp[max(0,i-delay)]-dp[max(0,i-forget)];
            dp[i]=(dp[i-1]+temp)%N;
        }
        return ((dp[n]-dp[n-forget])%N+N)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}