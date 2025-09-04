#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxProduct(vector<int>& nums) {
        int w= bit_width((unsigned)ranges::max(nums)),u=1<<w;
        ll ans=0;
        vector<int>dp(u);
        for (auto &i: nums){
            dp[i]=i;
        }
        for (int i = 0; i < u; ++i) {
            for (int j = i,lb; j ; j^=lb) {
                lb=j&-j;
                dp[i]= max(dp[i],dp[i^lb]);
            }
        }
        for (auto &i: nums){
            ans= max(ans,(ll)i*dp[i^(u-1)]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}