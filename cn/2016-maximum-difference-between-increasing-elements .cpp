#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=0,MIN=INT_MAX;
        for (int i = 0; i < nums.size(); ++i) {
            ans= max(ans,nums[i]-MIN);
            MIN= min(MIN,nums[i]);
        }
        return ans?ans:-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}