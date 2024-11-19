#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size(),MAX=INT_MIN,MIN=INT_MAX,sum=accumulate(nums.begin(), nums.end(),0),MAX1=INT_MIN,MIN1=INT_MAX;
        for (int i = 0; i < n; ++i) {
            MAX= max(0,MAX)+nums[i];
            MAX1= max(MAX1,MAX);
            MIN= min(0,MIN)+nums[i];
            MIN1= min(MIN1,MIN);
        }
        if (MIN1==sum)
            return MAX1;
        else
            return max(MAX1,sum-MIN1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}