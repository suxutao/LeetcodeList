#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans=nums[0],sum=nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i]>nums[i-1]){
                sum+=nums[i];
            }else{
                sum=nums[i];
            }
            ans= max(ans,sum);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}