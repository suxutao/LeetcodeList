#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int t;st.push(0);
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='('){
                st.push(0);
            }else{
                t=st.top();
                st.pop();
                st.top()+= max(1,t<<1);
            }
        }
        return st.top();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}