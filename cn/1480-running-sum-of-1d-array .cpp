#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}