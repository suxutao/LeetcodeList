#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int ans=INT_MAX;
        for (int i = 1; i < nums.size(); ++i) {
            ans= min(ans,nums[i]-nums[i-1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}