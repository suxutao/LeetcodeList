#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxSumTrionic(vector<int>& nums) {
        const ll inf=1e5*INT_MIN;
        ll n=nums.size(),f1=inf,f2=inf,f3=inf,ans=inf;
        for (int i = 1; i < n; ++i) {
            f3=nums[i]>nums[i-1]?max(f3,f2)+nums[i]:inf;
            f2=nums[i]<nums[i-1]?max(f1,f2)+nums[i]:inf;
            f1=nums[i]>nums[i-1]?max<ll>(f1,nums[i-1])+nums[i]:inf;
            ans= max(ans,f3);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}