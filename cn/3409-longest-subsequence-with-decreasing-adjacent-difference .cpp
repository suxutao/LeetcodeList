#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size(),mx=ranges::max(nums),mn=ranges::min(nums),ans=0;
        vector<vector<int>>dp(n,vector<int>(mx-mn+2,1));
        vector<int>last(mx+1,-1);
        for (int i = 0; i < n; ++i) {
            for (int j = mx-mn; j >= 0; --j) {
                dp[i][j]=dp[i][j+1];
                if (nums[i]-j>=0&&~last[nums[i]-j]){
                    dp[i][j]= max(dp[i][j],1+dp[last[nums[i]-j]][j]);
                }
                if (nums[i]+j<=mx&&~last[nums[i]+j]){
                    dp[i][j]= max(dp[i][j],1+dp[last[nums[i]+j]][j]);
                }
            }
            last[nums[i]]=i;
            ans= max(ans,ranges::max(dp[i]));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}