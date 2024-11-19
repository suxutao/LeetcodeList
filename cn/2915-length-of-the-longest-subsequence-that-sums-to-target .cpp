#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<int>dp(target+1,INT_MIN);
        dp[0]=0;
        for (auto &i: nums){
            for (int j = target; j >= i; --j) {
                dp[j]= max(dp[j],dp[j-i]+1);
            }
        }
        return dp[target]<0?-1:dp[target];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}