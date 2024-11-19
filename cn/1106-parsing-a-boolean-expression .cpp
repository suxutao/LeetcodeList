#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char cal(char a,char b,char op){
        bool c=a=='t',d=b=='t';
        return (op=='&'?c&d:c|d)?'t':'f';
    }
    bool parseBoolExpr(string expression) {
        stack<char>st;stack<char>sb;
        char c,cur;
        for (int j = 0; j < expression.size(); ++j) {
            char i=expression[j];
            switch (i) {
                case '(':
                    sb.push('-');
                    break;
                case ')':
                    cur=' ';
                    c=st.top();st.pop();
                    while (!sb.empty()&&sb.top()!='-'){
                        char t=sb.top();sb.pop();
                        cur=cur==' '?t: cal(t,cur,c);
                    }
                    if (c=='!')
                        cur=cur=='t'?'f':'t';
                    sb.pop();
                    sb.push(cur);
                    break;
                case '&':
                case '|':
                case '!':
                    st.push(i);
                    break;
                case 't':
                case 'f':
                    sb.push(i);
                default:;
            }
        }
        return sb.top()=='t';
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}