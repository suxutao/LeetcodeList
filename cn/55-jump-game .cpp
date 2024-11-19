#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size()==1)
            return true;
        int fanwei=0;
        for (int i = 0; i <= fanwei; ++i) {
            fanwei= max(fanwei,i+nums[i]);
            if (fanwei>nums.size()-2)
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}