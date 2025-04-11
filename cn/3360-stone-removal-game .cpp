#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canAliceWin(int n) {
        int cnt=11;
        while (--cnt){
            if (n<cnt)
                break;
            n-=cnt;
        }
        return cnt&1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}