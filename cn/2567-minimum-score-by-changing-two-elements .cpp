#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size(),ans=INT_MAX;
        sort(nums.begin(), nums.end());
        ans= min(ans,nums[n-1]-nums[2]);
        ans= min(ans,nums[n-3]-nums[0]);
        ans= min(ans,nums[n-2]-nums[1]);

        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}