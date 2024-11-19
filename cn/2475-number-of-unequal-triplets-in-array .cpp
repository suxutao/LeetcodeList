#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                for (int k = j+1; k < n; ++k) {
                    if (nums[i]!=nums[j]&&nums[i]!=nums[k]&&nums[j]!=nums[k])
                        ++ans;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}