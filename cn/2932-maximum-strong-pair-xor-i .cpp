#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n=nums.size(),MAX=0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (abs(nums[i]-nums[j])<= min(nums[i],nums[j]))
                    MAX= max(MAX,nums[i]^nums[j]);
            }
        }
        return MAX;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}