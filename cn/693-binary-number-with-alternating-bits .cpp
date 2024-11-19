#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long a=n>>1^n;
        return !((a+1)&a);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}