#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size(),sum=nums.back(),ans=0;
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i]>(double)sum/(n-i-1))
                ++ans;
            sum+=nums[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}