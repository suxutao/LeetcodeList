#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size(),ans=0;
        ranges::sort(nums);
        for (int i = 0; i < n; ++i) {
            if (nums[i]==0)
                continue;
            for (int j = i+1; j < n; ++j) {
                int up=lower_bound(nums.begin(), nums.end(),nums[i]+nums[j])-nums.begin();
                ans+=up-j-1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}