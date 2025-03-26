#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size(),ans=0;
        ranges::sort(nums);
        for (int i = 1; i < n - 1; ++i) {
            if (nums[i]!=nums[0]&&nums[i]!=nums[n-1]){
                ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}