#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumMedianSum(vector<int>& nums) {
        int n=nums.size();
        ll ans=0;
        ranges::sort(nums,greater<>());
        for (int i = 0; i < n / 3; ++i) {
            ans+=nums[i*2+1];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}