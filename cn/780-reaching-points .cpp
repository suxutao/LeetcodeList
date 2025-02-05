#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        while (sx < tx && sy < ty) {
            if (tx < ty) ty %= tx;
            else tx %= ty;
        }
        if (tx < sx || ty < sy) return false;
        return sx == tx ? (ty - sy) % tx == 0 : (tx - sx) % ty == 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}