#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int i,j;
        for (string a:tokens) {
            if (a=="+"){
                i=s.top();s.pop();
                j=s.top();s.pop();
                s.push(j+i);
            }else if(a=="-"){
                i=s.top();s.pop();
                j=s.top();s.pop();
                s.push(j-i);
            }else if(a=="*"){
                i=s.top();s.pop();
                j=s.top();s.pop();
                s.push(j*i);
            }else if(a=="/"){
                i=s.top();s.pop();
                j=s.top();s.pop();
                s.push(j/i);
            }else{
                s.push(stoi(a));
            }
        }
        return s.top();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}