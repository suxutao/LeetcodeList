#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int a=0,b=s.length()-1;
        while(a<b){
            if (s[a]!=s[b])
                return false;
            a++;b--;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}