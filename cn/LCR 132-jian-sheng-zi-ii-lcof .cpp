#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int cuttingBamboo(int n) {
        if (n == 2) return 1;
        if (n == 3) return 2;
        if (n == 4) return 4;
        ll ans = 1;
        while (n > 4) {
            n -= 3;
            ans = ans * 3 % 1000000007;
        }
        ans = ans * n % 1000000007;
        return (int) ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}