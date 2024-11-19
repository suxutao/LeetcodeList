#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkRecord(string s) {
        if (s.find("LLL")!=string::npos)
            return false;
        if (count(s.begin(), s.end(),'A')>=2)
            return false;
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}