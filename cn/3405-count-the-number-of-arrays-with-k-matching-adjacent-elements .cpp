#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const ll N=1e9+7;
    ll fast(ll x,ll a){
        ll ans=1;
        while (a){
            if (a&1)
                ans=ans*x%N;
            a>>=1;
            x=x*x%N;
        }
        return ans;
    }
    int countGoodArrays(int n, int m, int k) {
        vector<ll>fac(n+1),inv(n+1);
        fac[0]=1;inv[0]=1;
        for (int i = 1; i <= n; ++i) {
            fac[i]=fac[i-1]*i%N;
            if (i==k||i==n-k-1)
                inv[i]= fast(fac[i],N-2);
        }
        return fac[n-1]*inv[k]%N*inv[n-k-1]%N*m%N*fast(m-1,n-k-1)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}