#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),ans=1;
        vector<vector<int>>dp(n,vector<int>(2,1));
        for (int i = 1; i < n; ++i) {
            if (nums1[i]>=nums1[i-1])
                dp[i][0]= max(dp[i][0],1+dp[i-1][0]);
            if (nums1[i]>=nums2[i-1])
                dp[i][0]= max(dp[i][0],1+dp[i-1][1]);
            if (nums2[i]>=nums1[i-1])
                dp[i][1]= max(dp[i][1],1+dp[i-1][0]);
            if (nums2[i]>=nums2[i-1])
                dp[i][1]= max(dp[i][1],1+dp[i-1][1]);
            ans=max(ans, max(dp[i][0],dp[i][1]));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}