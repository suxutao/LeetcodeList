#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isUgly(int n) {
        if (n<=0)
            return false;
        while(n%2==0)
            n/=2;
        while (n%3==0)
            n/=3;
        while (n%5==0)
            n/=5;
        return n==1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}