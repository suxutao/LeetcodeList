#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isThree(int n) {
        int cnt=0;
        for (int i = 1; i <= n; ++i) {
            if (n%i==0)
                cnt++;
        }
        return cnt==3;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}