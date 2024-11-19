#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isMatch(string s, string p) {
        return regex_match(s,regex(p));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}