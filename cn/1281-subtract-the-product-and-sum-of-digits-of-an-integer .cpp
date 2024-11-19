#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int subtractProductAndSum(int n) {
        int ji=1,he=0;
        string s=to_string(n);
        for (int i = 0; i < s.size(); ++i) {
            ji*=s[i]-48;
            he+=s[i]-48;
        }
        return ji-he;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}