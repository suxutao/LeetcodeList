#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isBalanced(string num) {
        int ou=0,ji=0;
        for (int i = 0; i < num.size(); ++i) {
            if (i&1)
                ji+=num[i]-'0';
            else
                ou+=num[i]-'0';
        }
        return ji==ou;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}