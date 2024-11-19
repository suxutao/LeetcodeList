#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int numRollsToTarget(int n, int k, int target) {
        vector<int>dp(target+1);
        dp[0]=1;
        for (int i = 0; i < n; ++i) {
            for (int j = target; j>=0; --j) {
                dp[j]=0;
                for (int l = 1; l <= k; ++l) {
                    if (j>=l)
                        dp[j]=(dp[j]+dp[j-l])%N;
                }
            }
        }
        return dp[target];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}