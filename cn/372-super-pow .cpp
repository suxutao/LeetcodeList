#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1337,n=1140;
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
    int superPow(int a, vector<int>& b) {
        ll t=b[0];
        for (int i = 1; i < b.size(); ++i) {
            t=(t*10+b[i])%n;
        }
        t+=n;
        return fast(a,t);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}