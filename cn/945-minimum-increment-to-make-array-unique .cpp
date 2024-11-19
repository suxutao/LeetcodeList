#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i]<=nums[i-1]){
                ans+=nums[i-1]+1-nums[i];
                nums[i]=nums[i-1]+1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}