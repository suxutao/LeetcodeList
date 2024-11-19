#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size()==1)
            return 0;
        std::sort(nums.begin(), nums.end());
        int ans=0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            ans= max(ans,nums[i+1]-nums[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}