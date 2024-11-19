#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int nthMagicalNumber(ll n, ll a, ll b) {
        ll l=1,r=n*min(a,b),mid,L=a*b/__gcd(a,b);
        auto check=[&](ll x){
            return x/a+x/b-x/L<n;
        };
        while (l<r){
            mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l%int(1e9+7);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}