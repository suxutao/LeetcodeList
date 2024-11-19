#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();ll ans=0;
        ll dp[2]{};
        for (int i = 1; i <= n; ++i) {
            ll temp=dp[0];
            dp[0]= max(dp[1]+nums[i-1],dp[0]);
            dp[1]= max(temp-nums[i-1],dp[1]);
            ans= max(ans,dp[0]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}