#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int>dp(10001);
        for (int i = 0; i < n; ++i) {
            ++m[nums[i]];
        }
        dp[1]=m[1];
        for (int i = 2; i <= 10000; ++i) {
            dp[i]= max(dp[i-1],dp[i-2]+m[i]*i);
        }
        return dp.back();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}