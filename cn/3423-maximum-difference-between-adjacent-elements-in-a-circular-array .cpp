#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size(),ans= abs(nums[n-1]-nums[0]);
        for (int i = 0; i < n-1; ++i) {
            ans= max(ans, abs(nums[i]-nums[i+1]));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}