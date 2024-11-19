#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a,b;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='#') {
                if (!a.empty())
                    a.pop_back();
            }else
                a.push_back(s[i]);
        }
        for (int i = 0; i < t.size(); ++i) {
            if (t[i]=='#') {
                if (!b.empty())
                    b.pop_back();
            }else
                b.push_back(t[i]);
        }
        return a==b;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}