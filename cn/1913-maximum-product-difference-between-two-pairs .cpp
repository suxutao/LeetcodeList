#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n=nums.size();
        return nums[n-1]*nums[n-2]-nums[0]*nums[1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}