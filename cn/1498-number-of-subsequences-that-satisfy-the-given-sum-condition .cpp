#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    ll fast(ll a,ll x){
        ll ans=1;
        while (x){
            if (x&1)
                ans=ans*a%N;
            a=a*a%N;
            x>>=1;
        }
        return ans;
    }
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        ll ans=0,l=0;
        ranges::sort(nums);
        for (int r = 0; r < n; ++r) {
            l=upper_bound(nums.begin(), nums.end(),target-nums[r])-nums.begin()-1;
            if (l<r)
                ans=(ans+fast(2,r)-fast(2,r-l-1)+N)%N;
            else
                ans=(ans+fast(2,r))%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{2,3,3,4,6,7};
    Solution().numSubseq(v,12);
    return 0;
}