#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countSubarrays(vector<int>& nums, int k) {
        ll ans=0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i-1; j >=0 &&((nums[j]&nums[i])!=nums[j]) ; --j) {
                nums[j]&=nums[i];
            }
            ans+= upper_bound(nums.begin(), nums.begin()+i+1,k)-lower_bound(nums.begin(), nums.begin()+i+1,k);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}