#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size(),sum=0,tar;
        for (int i = 0; i < n; ++i) {
            sum+=nums[i];
        }
        target= abs(target);
        if ((sum+target)&1)
            return 0;
        tar=(sum+target)/2;
        vector<int>v(tar+1);
        v[0]=1;
        for (int i = 0; i < n; ++i) {
            for (int j = tar; j >= nums[i]; --j) {
                v[j]+=v[j-nums[i]];
            }
        }
        return v[tar];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}