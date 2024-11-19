#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<ll>v(nums.size()),MAX(nums.size());
        MAX[0]=nums[0];
        v[0]=nums[0]<<1;
        for (int i = 1; i < nums.size(); ++i) {
            MAX[i]= max((ll)nums[i],MAX[i-1]);
            v[i]=MAX[i]+(ll)nums[i]+v[i-1];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}