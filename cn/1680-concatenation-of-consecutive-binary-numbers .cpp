#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int concatenatedBinary(int n) {
        ll wei,ans=0;
        for (int i = 1; i <= n; ++i) {
            wei=32-__builtin_clz(i);
            ans=((ans<<wei)|i)%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}