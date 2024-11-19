#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reverseParentheses(string s) {
        vector<string>st;
        string t;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='('){
                st.push_back(t);
                t.clear();
            }else if (s[i]==')'){
                reverse(t.begin(), t.end());
                if (!st.empty()){
                    t=st.back()+t;
                    st.pop_back();
                }
            }else{
                t+=s[i];
            }
        }
        return t;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}