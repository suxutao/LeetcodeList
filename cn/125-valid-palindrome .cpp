#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int a=0,b=s.length()-1;
        while(a<b){
            while(a<s.length()-1&&(s[a]<'0'||s[a]>'9'&&s[a]<'a'||s[a]>'z')) a++;
            while(b>=0&&(s[b]<'0'||s[b]>'9'&&s[b]<'a'||s[b]>'z')) b--;
            if(a>b)
                return true;
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