#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int n=nums.size(),ans=0;
        sort(nums.begin(), nums.end());
        for (int i = (n+1)>>1; i < n; ++i) {
            if (nums[i]>=2*nums[ans]){
                ++ans;
            }
        }
        return ans<<1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={3,5,2,4};
    Solution().maxNumOfMarkedIndices(v);
    return 0;
}