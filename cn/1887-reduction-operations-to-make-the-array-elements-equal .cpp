#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n=nums.size(),ans=0;
        ranges::sort(nums,greater<>());
        for (int i = 0; i < n-1; ++i) {
            if (nums[i]!=nums[i+1]){
                ans+=i+1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}