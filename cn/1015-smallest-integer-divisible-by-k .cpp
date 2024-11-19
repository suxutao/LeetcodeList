#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int a=0;
        for (int i = 1; i <= k; ++i) {
            a=(a*10+1)%k;
            if(a==0)
                return i;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}