#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(),sum=accumulate(nums.begin(), nums.end(),0),pre=0;
        for (int i = 0; i < n; ++i) {
            sum-=nums[i];
            if (pre==sum)
                return i;
            pre+=nums[i];
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}