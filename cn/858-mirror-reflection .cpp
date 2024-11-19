#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int mirrorReflection(int p, int q) {
        int g=__gcd(p,q);
        p/=g;q/=g;
        if (p%2==0)
            return 2;
        if (q%2==0)
            return 0;
        return 1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}