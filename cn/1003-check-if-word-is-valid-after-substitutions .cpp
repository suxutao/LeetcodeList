#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValid(string s) {
        vector<char>st;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='c'){
                if (st.size()<2||st[st.size()-1]!='b'||st[st.size()-2]!='a')
                    return false;
                st.pop_back();
                st.pop_back();
            }else{
                st.push_back(s[i]);
            }
        }
        return st.empty();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}