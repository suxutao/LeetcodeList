#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans=0;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i+=2) {
            ans+=nums[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}