#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int twoEggDrop(int n) {
        int ans=0;
        for (int i = 1; n>0; ++i) {
            n-=i;
            ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}