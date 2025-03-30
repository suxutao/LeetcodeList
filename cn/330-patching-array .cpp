#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long N=nums.size(),ans=0,sum=1;
        for (int i = 0; i < N&&sum<=n; ++i) {
            while (nums[i]>sum&&sum<=n){
                ++ans;
                sum*=2;
            }
            sum+=nums[i];
        }
        while (n>sum-1){
            ++ans;
            sum*=2;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{1,2,2,6,34,38,41,44,47,47,56,59,62,73,77,83,87,89,94};
    Solution().minPatches(v,20);
    return 0;
}