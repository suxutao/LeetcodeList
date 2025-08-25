#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long perfectPairs(vector<int>& nums) {
        int n=nums.size();
        ll ans=0,l=0;
        for (int i = 0; i < n; ++i) {
            nums[i]=abs(nums[i]);
        }
        ranges::sort(nums);
        for (int i = 1; i < n; ++i) {
            while (nums[l]<nums[i]/2.)
                ++l;
            ans+=i-l;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}