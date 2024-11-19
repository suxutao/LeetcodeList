#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int countOrders(int n) {
        ll ans=1;
        for (ll i = 1; i <= n * 2; i+=2) {
            ans=ans*i*(i+1)/2%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}