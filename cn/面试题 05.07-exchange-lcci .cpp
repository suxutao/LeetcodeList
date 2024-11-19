#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int exchangeBits(int num) {
        for (int i = 0; i < 32; i+=2) {
            int a=num>>i&1,b=num>>(i+1)&1;
            if (a&&!b){
                num&=~(1<<i);
                num|=1<<(i+1);
            }else if (!a&&b){
                num|=1<<i;
                num&=~(1<<(i+1));
            }
        }
        return num;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}