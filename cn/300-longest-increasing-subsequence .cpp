#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        auto end=nums.begin();
        for (int i = 0; i < nums.size(); ++i) {
            auto it= lower_bound(nums.begin(),end,nums[i]);
            *it=nums[i];
            if (it==end)
                ++end;
        }
        return end-nums.begin();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    return 0;
}