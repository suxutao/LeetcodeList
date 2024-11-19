#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    typedef long long ll;
    int maximum(int a, int b) {
        ll aa=(ll)a+INT_MAX+1,bb=(ll)b+INT_MAX+1;
        for (int i = 32; i >= 0; --i) {
            if (aa&(1ll<<i)&&!(bb&(1ll<<i)))
                return a;
            else if (!(aa&(1ll<<i))&&bb&(1ll<<i))
                return b;
        }
        return a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().maximum(5,10);
    return 0;
}