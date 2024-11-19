#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size()<=2)
            return -1;
        std::sort(nums.begin(), nums.end());
        int MIN=nums[0],MAX=nums[nums.size()-1];
        for (int i = 1; i < nums.size()-1; ++i) {
            if (nums[i]!=MIN and nums[i]!=MAX)
                return nums[i];
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}