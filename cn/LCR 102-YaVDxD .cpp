#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        if (nums.size()==1)
            return abs(nums[0])== abs(target)?1:0;
        int sum=0;
        for (int i = 0; i < nums.size(); ++i) {
            sum+=nums[i];
        }
        if (abs(target)>sum)
            return 0;
        int pack=target+sum;
        if (pack&1)
            return 0;
        pack>>=1;
        vector<int>v(pack+1,0);
        v[0]=1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = pack; j >= nums[i]; j--) {
                v[j] += v[j - nums[i]];
            }
        }
        return v[pack];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}