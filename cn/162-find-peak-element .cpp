#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:

    int findPeakElement(vector<int>& nums) {
        if (nums.size()==1)
            return 0;
        if (nums[0]>nums[1])
            return 0;
        if (nums[nums.size()-1]>nums[nums.size()-2])
            return nums.size()-1;
        for (int i = 1; i < nums.size() - 1; ++i) {
            if (nums[i]>nums[i-1]&&nums[i]>nums[i+1])
                return i;
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}