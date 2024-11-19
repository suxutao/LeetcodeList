#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxStrength(vector<int>& nums) {
        int n=nums.size();
        ll ans=INT_MIN;
        for (int i = 1; i <= (1 << n) - 1; ++i) {
            ll temp=1;
            for (int j = 0; j < n; ++j) {
                if (i>>j&1)
                    temp*=nums[j];
            }
            ans= max(ans,temp);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}