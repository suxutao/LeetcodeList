#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkValidString(string s) {
        int One=0,Two=0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i]==')')
                One--;
            else
                One++;
            if (s[s.length()-i-1]=='(')
                Two--;
            else
                Two++;
            if (One<0||Two<0)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}