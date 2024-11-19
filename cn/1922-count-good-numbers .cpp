#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    ll fast(ll a,ll x){
        ll ans=1;
        while (x){
            if (x&1)
                ans=(ans*a)%N;
            a=(a*a)%N;
            x>>=1;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        if (n&1)
            return (fast(5,n/2+1)*fast(4,n/2))%N;
        else
            return (fast(5,n/2)*fast(4,n/2))%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}