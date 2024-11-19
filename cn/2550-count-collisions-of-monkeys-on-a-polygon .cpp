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
                ans=(ans*a)%N;
            a=(a*a)%N;
            x>>=1;
        }
        return ans;
    }
    int monkeyMove(int n) {
        return (fast(2,n)+N-2)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}