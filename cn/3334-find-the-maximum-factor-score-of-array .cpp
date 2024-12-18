#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxScore(vector<int>& nums) {
        int n=nums.size();
        if (n==1)
            return (ll)nums[0]*nums[0];
        vector<ll>pre_gcd(n),pre_lcm(n),suf_gcd(n),suf_lcm(n);
        pre_gcd[0]=pre_lcm[0]=nums[0];
        suf_gcd[n-1]=suf_lcm[n-1]=nums[n-1];
        for (int i = 1; i < n; ++i) {
            pre_gcd[i]=gcd(pre_gcd[i-1],(ll)nums[i]);
            pre_lcm[i]=lcm(pre_lcm[i-1],(ll)nums[i]);
        }
        for (int i = n-2; i >= 0; --i) {
            suf_lcm[i]=lcm(suf_lcm[i+1],(ll)nums[i]);
            suf_gcd[i]=gcd(suf_gcd[i+1],(ll)nums[i]);
        }
        ll ans= max(max(suf_lcm[1]*suf_gcd[1],pre_gcd[n-2]*pre_lcm[n-2]),max(suf_lcm[0]*suf_gcd[0],pre_gcd[n-1]*pre_lcm[n-1]));
        for (int i = 1; i < n-1; ++i) {
            ans= max(ans, gcd(pre_gcd[i-1],suf_gcd[i+1])*lcm(pre_lcm[i-1],suf_lcm[i+1]));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}