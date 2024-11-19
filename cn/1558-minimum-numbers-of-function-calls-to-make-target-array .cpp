#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        long long ans=0,n=nums.size(),sum= accumulate(nums.begin(),nums.end(),0ll);
        while (sum){
            for (int i = 0; i < n; ++i) {
                if (nums[i]&1){
                    --sum;++ans;
                }
            }
            if (sum==0)
                break;
            for (int i = 0; i < n; ++i) {
                nums[i]>>=1;
                sum-=nums[i];
            }
            ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}