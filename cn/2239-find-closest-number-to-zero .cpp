#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size(),ans=INT_MAX;
        for (int i = 0; i < n; ++i) {
            ans= min(ans, abs(nums[i]));
        }
        return find(nums.begin(), nums.end(),ans)==nums.end()?-ans:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}