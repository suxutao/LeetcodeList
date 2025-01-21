#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int ans=0,n=nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = max(0,i-nums[i]); j <= i; ++j) {
                ans+=nums[j];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}