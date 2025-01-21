#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
using ll = long long;
ll f[100005]{1},inv[100005]{};
class Solution {
public:
    const int N=1e9+7;
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
    void init(int n){
        for (int i = 1; i <= n; ++i) {
            f[i]=f[i-1]*i%N;
        }
        inv[n]= fast(f[n],N-2);
        for (int i = n; i; --i) {
            inv[i-1]=inv[i]*i%N;
        }
    }
    ll com(ll n,ll m){
        return f[n]*inv[m]%N*inv[n-m]%N;
    }
    int minMaxSums(vector<int>& nums, int k) {
        int n=nums.size();
        ll ans=0;
        ranges::sort(nums);
        init(n);
        for (int i = 0; i < n; ++i) {
            ll s=0;
            for (int j = 0; j <= min(k - 1, i); ++j) {
                s+= com(i,j);
            }
            ans=(ans+s%N*(nums[i]+nums[n-i-1])%N)%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}