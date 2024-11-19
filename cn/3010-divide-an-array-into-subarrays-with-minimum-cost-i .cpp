#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        std::sort(nums.begin()+1, nums.end());
        return nums[0]+nums[1]+nums[2];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}