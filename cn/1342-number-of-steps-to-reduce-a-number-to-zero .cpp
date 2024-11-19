#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfSteps(int num) {
        int ci=0;
        while (num){
            if (num&1)
                num--;
            else
                num/=2;
            ci++;
        }
        return ci;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}