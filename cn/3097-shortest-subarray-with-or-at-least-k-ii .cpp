#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size(),ans=INT_MAX;
        for (int i = 0; i < n; ++i) {
            if (nums[i]>=k)
                return 1;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i-1;j>=0&&(nums[i]|nums[j])!=nums[j]; --j) {
                nums[j]|=nums[i];
                if (nums[j]>=k)
                    ans= min(ans,i-j+1);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}