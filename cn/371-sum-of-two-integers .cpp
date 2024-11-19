#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getSum(int a, int b) {
        while (b){
            unsigned c=unsigned (a&b)<<1;
            a^=b;
            b=c;
        }
        return a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}