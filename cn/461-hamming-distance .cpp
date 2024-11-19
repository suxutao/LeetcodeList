#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        while(x|y){
            if ((x&1)^(y&1))
                count++;
            x>>=1;y>>=1;
        }
        return count;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}