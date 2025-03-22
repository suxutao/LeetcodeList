#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),sum=0,l=0,ans=INT_MAX;
        for (int r = 0; r < n; ++r) {
            sum+=nums[r];
            if (sum>=target){
                while (sum>=target){
                    sum-=nums[l++];
                }
                ans=min(ans,r-l+2);
            }
        }
        return ans==INT_MAX?0:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}