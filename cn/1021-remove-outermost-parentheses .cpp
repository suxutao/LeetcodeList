#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans,t;int cnt=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='(')
                ++cnt;
            else
                --cnt;
            t.push_back(s[i]);
            if (cnt==0){
                ans.insert(ans.end(),t.begin()+1,t.end()-1);
                t="";
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}