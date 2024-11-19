#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int calculate(string s) {
        int x=1,y=0;
        for (char c:s) {
            if (c=='A')
                x=2*x+y;
            else
                y=2*y+x;
        }
        return x+y;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}