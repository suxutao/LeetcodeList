#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        return (s.find('1') == string::npos) == (target.find('1') == string::npos);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}