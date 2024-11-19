#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int maximumXorProduct(long long a, long long b, int n) {
        if (a<b) swap(a,b);
        auto check=[&]()->bool{
            int len=63-__builtin_clzll(a);
            for (int i = len; i >= n; --i) {
                bool x=a&(1ll<<i),y=b&(1ll<<i);
                if (x^y)
                    return false;
            }
            return true;
        };
        if (a<(1ll<<n)||check()){
            bool fen= false;
            for (int i = n-1; i >= 0; --i) {
                bool x=a&(1ll<<i),y=b&(1ll<<i);
                if (!x&&!y){
                    a|=(1ll<<i);
                    b|=(1ll<<i);
                }else if (!x||!y){
                    if (fen){
                        b&=~(1ll<<i);
                        a|=(1ll<<i);
                    }else{
                        a&=~(1ll<<i);
                        b|=(1ll<<i);
                        fen=true;
                    }
                }
            }
        }else{
            for (int i = 0; i < n; ++i) {
                bool x=a&(1ll<<i),y=b&(1ll<<i);
                if (!x&&!y){
                    a|=(1ll<<i);
                    b|=(1ll<<i);
                }else if (!x||!y){
                    a&=~(1ll<<i);
                    b|=(1ll<<i);
                }
            }
        }
        return a%N*(b%N)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}