#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumOr(vector<int>& nums, int k) {
        ll ans=0,n=nums.size();
        vector<int>v(n+1);
        for (int i = n-1; i; --i) {
            v[i]=v[i+1]|nums[i];
        }
        for (int i=0,pre=0; i < n; ++i) {
            ans= max(ans,pre|(ll)nums[i]<<k|v[i+1]);
            pre|=nums[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}