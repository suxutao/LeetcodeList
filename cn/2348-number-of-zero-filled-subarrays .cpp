#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long zeroFilledSubarray(vector<int>& nums) {
        ll n=nums.size(),ans=0,pre=0;
        for (int i = 0; i < n; ++i) {
            if (nums[i]==0){
                ans+=++pre;
            }else{
                pre=0;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}