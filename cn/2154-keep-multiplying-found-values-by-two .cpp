#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]==original)
                original<<=1;
        }
        return original;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}