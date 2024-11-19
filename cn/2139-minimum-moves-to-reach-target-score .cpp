#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans=0,cnt=0;
        while (target>1){
            if (target%2==0&&cnt< maxDoubles) {
                ++cnt;
                target >>= 1;
            }else {
                --target;
            }
            if (cnt==maxDoubles){
                ans+=target;
                break;
            }
            ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}