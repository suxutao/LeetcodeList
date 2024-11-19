#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string t;
        int p=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
                t.push_back(s[i]);
            }
        }
        reverse(t.begin(), t.end());
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
                s[i]=t[p++];
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}