#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool hasSameDigits(string s) {
        string t(s);
        while (t.size()>2){
            t.assign(s.size()-1,' ');
            for (int i = 0; i < s.size() - 1; ++i) {
                t[i]=(s[i]-'0'+s[i+1]-'0')%10+'0';
            }
            s=t;
        }
        return t[0]==t[1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}