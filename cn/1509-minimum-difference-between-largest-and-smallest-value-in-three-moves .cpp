#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDifference(vector<int>& nums) {
        if (nums.size()<=4)
            return 0;
        int ans=INT_MAX,n=nums.size();
        sort(nums.begin(), nums.end(),greater<>());
        ans= min(ans,nums[0]-nums[n-4]);
        ans= min(ans,nums[1]-nums[n-3]);
        ans= min(ans,nums[2]-nums[n-2]);
        ans= min(ans,nums[3]-nums[n-1]);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}