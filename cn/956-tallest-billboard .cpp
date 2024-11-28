#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
        int n=rods.size(),sum=accumulate(rods.begin(), rods.end(), 0);
        vector<int>dp(sum + 1, 0),dp1;
        for (int i = 1; i <= n; ++i) {
            dp1 = dp;
            for (int j = 0; j <= sum; ++j) {
                if (dp[j] < j) continue;
                int k = j + rods[i - 1];
                dp1[k] = max(dp1[k], dp[j] + rods[i - 1]);
                k = abs(j - rods[i - 1]);
                dp1[k] = max(dp1[k], dp[j] + rods[i - 1]);
            }
            swap(dp, dp1);
        }
        return dp[0] / 2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}