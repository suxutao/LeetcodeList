#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    ll sum(ll x){
        ll ans=0,chen=1;
        for (ll i = 1; i <= x; i<<=2,chen++) {
            ll cnt= min(x,(i<<2)-1)-(i-1);
            ans+=cnt*chen;
        }
        return ans;
    }
    long long minOperations(vector<vector<int>>& queries) {
        ll ans=0;
        for (auto &q: queries){
            ans+=(sum(q[1])-sum(q[0]-1)+1)/2;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}