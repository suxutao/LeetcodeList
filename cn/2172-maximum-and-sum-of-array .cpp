#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumANDSum(vector<int>& nums, int numSlots) {
        int n=nums.size(),ans=0;
        vector<int>dp(1<<(numSlots*2));
        for (int i = 0; i < 1 << (numSlots*2); ++i) {
            int pos=__builtin_popcount(i);
            if (pos>=n)
                continue;
            for (int j = 0; j < numSlots*2; ++j) {
                if (!(i>>j&1)){
                    int s=i|1<<j;
                    dp[s]=max(dp[s],dp[i]+(nums[pos]&(j/2+1)));
                    ans= max(ans,dp[s]);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}