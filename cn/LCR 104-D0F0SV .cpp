#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>v(target+1,0);
        for (int i = 0; i <= target; ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (nums[j]==i)
                    v[i]++;
                if (nums[j]<i&&v[i]<INT_MAX-v[i-nums[j]])
                    v[i]+=v[i-nums[j]];
            }
        }
        return v[target];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}