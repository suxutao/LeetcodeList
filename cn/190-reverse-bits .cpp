#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t arr[32],ans=0;
        for (int i = 0; i < 32; ++i) {
            arr[i]=n&1;
            n>>=1;
        }
        for (int i = 0; i < 32; ++i) {
            ans<<=1;
            ans|=arr[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}