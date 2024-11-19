#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findTheWinner(int n, int k) {
        int ans=0;
        for (int i = 2; i <= n; ++i) {
            ans=(ans+k)%i;
        }
        return ans+1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}