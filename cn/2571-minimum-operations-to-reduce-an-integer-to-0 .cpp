#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(int n) {
        return __builtin_popcount(3*n^n);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}