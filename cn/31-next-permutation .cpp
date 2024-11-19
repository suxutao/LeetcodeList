#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size()==1)
            return;
        int a = nums.size() - 2;
        while (a >= 0 && nums[a] >= nums[a + 1]) {
            a--;
        }
        if (a >= 0) {
            int b = nums.size() - 1;
            while (b >= 0 && nums[a] >= nums[b]) {
                b--;
            }
            swap(nums[a], nums[b]);
        }
        reverse(nums.begin() + a + 1, nums.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}