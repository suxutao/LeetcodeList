#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int ji=0,ou=0;
        for (int i = 1; i <= n * 2; ++i) {
            if (i&1)
                ji+=i;
            else
                ou+=i;
        }
        return gcd(ji,ou);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}