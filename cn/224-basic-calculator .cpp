#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        st.push(1);
        int ans=0,sign=1;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='('){
                st.push(sign);
            }else if (s[i]==')'){
                st.pop();
            }else if (s[i]=='+'){
                sign=st.top();
            }else if (s[i]=='-'){
                sign=-st.top();
            }else if (s[i]==' '){
                continue;
            }else{
                int num=0;
                while (i<s.size()&&s[i]<='9'&&s[i]>='0'){
                    num=10*num-'0'+s[i];
                    ++i;
                }--i;
                ans+=num*sign;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}