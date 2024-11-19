#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countExcellentPairs(vector<int>& nums, int k) {
        set<int>s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        int n=nums.size();ll ans=0;
        for (int i = 0; i < n; ++i) {
            nums[i]=__builtin_popcount(nums[i]);
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; ++i) {
            auto pos=lower_bound(nums.begin(), nums.end(),k-nums[i]);
            ans+=nums.end()-pos;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}