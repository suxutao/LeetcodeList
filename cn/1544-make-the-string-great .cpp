#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string makeGood(string s) {
        string st;
        st.push_back(s[0]);
        for (int i = 1; i < s.size(); ++i) {
            if (!st.empty()&&(s[i]==st.back()-32||s[i]==st.back()+32))
                st.pop_back();
            else
                st.push_back(s[i]);
        }
        return st;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}