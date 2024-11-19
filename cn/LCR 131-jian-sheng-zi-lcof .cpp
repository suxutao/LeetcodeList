#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int cuttingBamboo(int bamboo_len) {
        vector<ll>v(bamboo_len+1);
        v[1]=1;
        for (ll i = 2; i <= bamboo_len; ++i) {
            for (ll j = 1; j < i; ++j) {
                v[i]= max(v[i], max(j,v[j])*(i-j));
            }
        }
        return v[bamboo_len];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}