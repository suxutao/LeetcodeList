#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),ans=INT_MIN,sum=0;
        for (int i = 0; i < n; ++i) {
            sum+=nums[i];
            ans= max(ans,sum);
            sum= max(sum,0);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}