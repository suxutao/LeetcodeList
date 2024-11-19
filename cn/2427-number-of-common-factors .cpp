#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int commonFactors(int a, int b) {
        int ans=1;
        for (int i = 2; i <= min(a, b); ++i) {
            if (a%i==0&&b%i==0)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}