#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int MAX=max_element(nums.begin(), nums.end())-nums.begin();
        int MIN=min_element(nums.begin(), nums.end())-nums.begin();
        int ans=nums[MAX]-nums[MIN];
        if (ans<=k*2)
            return 0;
        return ans-k*2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}