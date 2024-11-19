#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumNumbers(int num, int k) {
        if (num==0)
            return 0;
        if (k==0)
            return num%10?-1:1;
        for (int i = 1; i*k <= num; ++i) {
            if ((num-i*k)%10==0)
                return i;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}