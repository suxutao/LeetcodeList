#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ss=s+s;
        ss.erase(ss.begin());
        ss.erase(ss.end()-1);
        if (ss.find(s)!=string::npos)
            return true;
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}