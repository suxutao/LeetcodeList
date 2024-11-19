#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minimumReplacement(vector<int>& nums) {
        ll ans=0,r=nums.back(),n=nums.size();
        for (int i = n-2; i >= 0; --i) {
            ll k=(nums[i]-1)/r;
            ans+=k;
            r=nums[i]/(k+1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}