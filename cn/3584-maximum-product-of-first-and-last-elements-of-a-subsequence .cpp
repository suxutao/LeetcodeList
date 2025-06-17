#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumProduct(vector<int>& nums, int m) {
        int n=nums.size();
        ll ans=LLONG_MIN,mn=LLONG_MAX,mx=LLONG_MIN;
        for (int i = m-1; i < n; ++i) {
            mn=min<ll>(mn,nums[i-m+1]);
            mx=max<ll>(mx,nums[i-m+1]);
            ans=max(ans, max(mn*nums[i],mx*nums[i]));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}