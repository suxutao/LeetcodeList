#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string resultingString(string s) {
        int n=s.size();
        string st;
        for (int i = 0; i < n; ++i) {
            if (st.empty()){
                st.push_back(s[i]);
            }else{
                if (st.back()=='z'&&s[i]=='a'||st.back()=='a'&&s[i]=='z'){
                    st.pop_back();
                }else if (st.back()-1==s[i]||st.back()+1==s[i]){
                    st.pop_back();
                }else{
                    st.push_back(s[i]);
                }
            }
        }
        return st;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}