#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int addDigits(int num) {
        if (num<10)
            return num;
        return num%9==0?9:num%9;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}