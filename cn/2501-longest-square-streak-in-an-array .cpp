#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int n=nums.size(),ans=-1;
        sort(nums.begin(), nums.end());
        unordered_set<int>s(nums.begin(),nums.end());
        vector<int>dp(n,1);
        for (int i = 1; i < n; ++i) {
            int t=sqrt(nums[i]);
            if (t*t!=nums[i])
                continue;
            auto te=lower_bound(nums.begin(), nums.end(),t)-nums.begin();
            if (te<n&&t==nums[te]){
                dp[i]= max(dp[te]+1,dp[i]);
                ans= max(ans,dp[i]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}