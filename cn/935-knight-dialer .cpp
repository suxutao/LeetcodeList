#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int knightDialer(int n) {
        if (n==1)
            return 10;
        vector<ll>v(4,1),fu(4);
        for (int i = 0; i < n - 1; ++i) {
            fu[0]=v[2]+v[1];
            fu[1]=v[0]*2;
            fu[2]=v[0]*2+v[3];
            fu[3]=v[2]*2;
            swap(fu,v);
            for (int j = 0; j < 4; ++j) {
                v[j]%=N;
            }
        }
        return (v[0]*4+v[1]*2+v[2]*2+v[3])%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}