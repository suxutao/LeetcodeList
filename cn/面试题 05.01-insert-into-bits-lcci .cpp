#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int insertBits(int N, int M, int i, int j) {
        int t=0;
        for (int k = i; k <= j; ++k) {
            N&=~(1<<k);
            t|=1<<(k-i);
        }
        M&=t;
        N|=M<<i;
        return N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}