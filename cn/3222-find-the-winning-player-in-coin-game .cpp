#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string losingPlayer(int x, int y) {
        int a= min(x,y/4);
        return a&1?"Alice":"Bob";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}