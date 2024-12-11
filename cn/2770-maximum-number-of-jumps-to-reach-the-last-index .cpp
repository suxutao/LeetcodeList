#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int maximumJumps(vector<int>& nums, ll target) {
        int n=nums.size();
        vector<ll>dp(n,INT_MIN);
        dp[0]=0;
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i]<=nums[j]+target&&nums[i]>=nums[j]-target&&dp[j]!=INT_MIN){
                    dp[i]= max(dp[i],dp[j]+1);
                }
            }
        }
        return dp[n-1]!=INT_MIN?dp[n-1]:-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}