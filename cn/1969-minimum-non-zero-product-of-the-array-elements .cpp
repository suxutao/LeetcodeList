#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    ll pow(ll di,ll zhi){
        ll ans=1;
        di%=N;
        while (zhi){
            if (zhi&1)
                ans=(ans*di)%N;
            di=(di*di)%N;
            zhi>>=1;
        }
        return ans;
    }
    int minNonZeroProduct(int p) {
        ll ans=(1ll<<p)-1;
        return ans%N*pow(ans-1,((ans+1)>>1)-1)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}