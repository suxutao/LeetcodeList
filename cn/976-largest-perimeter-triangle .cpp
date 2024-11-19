#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end(),greater<>());
        for (int i = 0; i < n - 2; ++i) {
            if (nums[i]<nums[i+1]+nums[i+2])
                return nums[i]+nums[i+1]+nums[i+2];
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}