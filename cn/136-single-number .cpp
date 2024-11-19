#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size()==1)
            return nums[0];
        int ans=nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            ans^=nums[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}