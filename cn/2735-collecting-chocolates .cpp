#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minCost(vector<int>& nums, ll x) {
        int n=nums.size();
        ll ans=LLONG_MAX,sum;
        ranges::reverse(nums);
        vector<int>mn(nums);
        for (int i = 0; i < n; ++i) {
            nums.push_back(nums[i]);
        }
        for (int i = 0; i < n; ++i) {
            sum=x*i;
            for (int j = 0; j < n; ++j) {
                mn[j]=min(mn[j],nums[i+j]);
                sum+=mn[j];
            }
            ans= min(ans,sum);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}