#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size(),ans=1;
        vector<int>dp(n,1);
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i]>=nums[j]){
                    dp[i]=max(dp[i],dp[j]+1);
                    ans= max(dp[i],ans);
                }
            }
        }
        return n-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{3,1,2};
    Solution().minimumOperations(v);
    return 0;
}