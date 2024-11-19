#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        if (nums.size()==1)
            return 0;
        sort(nums.begin(), nums.end());
        int n=nums.size(),l=nums[0]+k,r=nums[n-1]-k,ans=nums[n-1]-nums[0];
        for (int i = 0; i < n-1; ++i) {
            ans= min(ans, max(r,nums[i]+k)-min(l,nums[i+1]-k));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}