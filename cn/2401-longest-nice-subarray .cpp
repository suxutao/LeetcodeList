#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int ans = 0;
        for (int l = 0, r = 0, or_ = 0; r < nums.size(); r++) {
            while (or_ & nums[r])
                or_ ^= nums[l++];
            or_ |= nums[r];
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}