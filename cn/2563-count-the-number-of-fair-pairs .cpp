#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        ll ans=0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            int l=lower-nums[i],u=upper-nums[i];
            ll low=lower_bound(nums.begin(), nums.end(),l)-nums.begin();
            ll up=upper_bound(nums.begin(), nums.end(),u)-nums.begin();
            if (low<=i&&i<=up){
                ans+=up-low-1;
            }else{
                ans+=up-low;
            }
        }
        return (ans+1)>>1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}