#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size(),ans=INT_MAX;
        for (int i = 2; i < n; ++i) {
            for (int j = 1; j < i; ++j) {
                for (int k = 0; k < j; ++k) {
                    if (nums[j]>nums[i]&&nums[j]>nums[k])
                        ans= min(ans,nums[j]+nums[i]+nums[k]);
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}