#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for (int i = 0; i < n - 2; ++i) {
            if (nums[i+1]/2.==(double)nums[i]+nums[i+2])
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}