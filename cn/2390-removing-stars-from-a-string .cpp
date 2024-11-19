#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string removeStars(string s) {
        stack<int>st;
        for (int i = s.size()-1; i >= 0; --i) {
            if (s[i]=='*')
                st.push('*');
            else{
                if (!st.empty()&&st.top()=='*')
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        string ans;
        while (!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}