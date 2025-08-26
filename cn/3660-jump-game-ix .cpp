#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n),pre_mx(n),suf_mn(n);
        pre_mx[0]=nums[0];
        suf_mn[n-1]=nums[n-1];
        for (int i = 1; i < n; ++i) {
            pre_mx[i]= max(pre_mx[i-1],nums[i]);
        }
        dp[n-1]=pre_mx[n-1];
        for (int i = n - 2; i >= 0; --i) {
            suf_mn[i]= min(suf_mn[i+1],nums[i]);
            if (pre_mx[i]<=suf_mn[i+1]){
                dp[i]=pre_mx[i];
            }else{
                dp[i]=dp[i+1];
            }
        }
        return dp;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}