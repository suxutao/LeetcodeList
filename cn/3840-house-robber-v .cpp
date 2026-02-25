#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long rob(vector<int>& nums, vector<int>& colors) {
        ll n=nums.size();
        vector<ll>dp(n);
        dp[0]=nums[0];
        for (int i = 1; i < n; ++i) {
            if (colors[i]==colors[i-1]){
                dp[i]=max(dp[i-1],nums[i]+(i>1?dp[i-2]:0));
            }else{
                dp[i]=nums[i]+dp[i-1];
            }
        }
        return dp[n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}