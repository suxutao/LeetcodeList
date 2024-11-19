#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int nthUglyNumber(ll n, ll a, ll b, ll c) {
        ll l=1,r=n*min(a,b),mid,L1=a*b/__gcd(a,b);
        ll L2=a*c/__gcd(a,c),L3=b*c/__gcd(b,c);
        ll L=L1*c/__gcd(L1,c);
        auto check=[&](ll x){
            return x/a+x/b+x/c+x/L-x/L1-x/L2-x/L3<n;
        };
        while (l<r){
            mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}