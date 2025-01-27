#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size(),sum=accumulate(nums.begin(), nums.end(),0),pre=0,ans=0;
        for (int i = 0; i < n-1; ++i) {
            pre+=nums[i];
            sum-=nums[i];
            if ((pre-sum)%2==0){
                ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}