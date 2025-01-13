#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long n=nums.size(),sum=accumulate(nums.begin(), nums.end(),0ll),ans=0,pre=0;
        for (int i = 1; i < n; ++i) {
            pre+=nums[i-1];
            if (pre>=sum-pre){
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