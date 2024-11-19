#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPowerOfFour(int n) {
        long long a=1;
        while(n>=a){
            if (n==a)
                return true;
            a<<=2;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}