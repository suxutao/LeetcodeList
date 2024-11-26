#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxScore(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(1<<n);
        for (int i = 1; i < 1 << n; ++i) {
            int pos=__builtin_popcount(i)/2;
            for (int j = 0; j < n; ++j) {
                for (int k = j+1; k < n; ++k) {
                    if (i>>j&1&&i>>k&1){
                        dp[i]=max(dp[i],dp[i^(1<<j)^(1<<k)]+pos*__gcd(nums[j],nums[k]));
                    }
                }
            }
        }
        return dp.back();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{1,2};
    Solution().maxScore(v);
    return 0;
}