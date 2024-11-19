#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size(),ans=0,dp[2]{};
        for (int i = 1; i <= n; ++i) {
            dp[0]= max(0,nums[i-1]+dp[0]);
            dp[1]= min(0,dp[1]+nums[i-1]);
            ans= max({ans,dp[0],-dp[1]});
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}