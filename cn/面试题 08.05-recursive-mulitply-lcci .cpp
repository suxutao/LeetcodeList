#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int multiply(int A, int B) {
        if (B==1)
            return A;
        return B&1? (multiply(A,B>>1)<<1)+A:multiply(A,B>>1)<<1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}