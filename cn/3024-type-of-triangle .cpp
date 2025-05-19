#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string triangleType(vector<int>& nums) {
        ranges::sort(nums);
        if (nums[0]+nums[1]<=nums[2])
            return "none";
        if (nums[0]==nums[1]&&nums[0]==nums[2])
            return "equilateral";
        else if (nums[0]==nums[1]||nums[0]==nums[2]||nums[1]==nums[2])
            return "isosceles";
        else
            return "scalene";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}