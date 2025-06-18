#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<array<int,2>>dp(n,{INT_MAX,INT_MAX});
        dp[0][0]=0;
        dp[0][1]=1;
        for (int i = 1; i < n; ++i) {
            if (nums1[i]>nums1[i-1]&&nums2[i]>nums2[i-1]){
                dp[i][0]=min(dp[i][0],dp[i-1][0]);
                dp[i][1]=min(dp[i][1],dp[i-1][1]+1);
            }
            if (nums1[i]>nums2[i-1]&&nums2[i]>nums1[i-1]){
                dp[i][0]=min(dp[i][0],dp[i-1][1]);
                dp[i][1]=min(dp[i][1],dp[i-1][0]+1);
            }
        }
        return min(dp.back()[0],dp.back()[1]);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}