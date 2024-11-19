#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int mechanicalAccumulator(int target) {
        int ans=0;
        for (int i = 1; i <= target; ++i) {
            ans+=i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}