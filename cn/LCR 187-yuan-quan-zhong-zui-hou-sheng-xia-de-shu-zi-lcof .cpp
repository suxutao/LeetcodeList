#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int iceBreakingGame(int num, int target) {
        int ans=0;
        for (int i = 2; i <= num; ++i) {
            ans=(ans+target)%i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}