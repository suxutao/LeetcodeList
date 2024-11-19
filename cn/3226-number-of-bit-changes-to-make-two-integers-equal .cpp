#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minChanges(int n, int k) {
        int ans=0;
        for (int i = 0; i < 32; ++i) {
            if (!(n>>i&1)&&(k>>i&1))
                return -1;
            if ((n>>i&1)&&!(k>>i&1))
                ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}