#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a=0;
        for (int i = 0; i < 32; ++i) {
            a+=n&1;
            n>>=1;
        }
        return a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}