#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if (password.size()<8)
            return false;
        bool xiao= false,da= false,shu= false,te= false;
        set<char>s= {'!','@','#','$','%','^','&','*','(',')','-','+'};
        for (int i = 1; i < password.size(); ++i) {
            if (password[i]==password[i-1])
                return false;
        }
        for (char i:password) {
            if (i>='a'&&i<='z')
                xiao= true;
            else if (i>='A'&&i<='Z')
                da= true;
            else if (i>='0'&&i<='9')
                shu= true;
            else if (s.count(i))
                te= true;
        }
        return xiao&&da&&shu&&te;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}