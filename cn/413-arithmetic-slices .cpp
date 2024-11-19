#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans=0,n=nums.size(),cnt=0;
        for (int i = 2; i < n; ++i) {
            if (nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                cnt++;
                ans+=cnt;
            }else{
                cnt=0;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}