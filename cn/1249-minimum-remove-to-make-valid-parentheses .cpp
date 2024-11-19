#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string t;int cnt=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='('){
                ++cnt;
                t.push_back(s[i]);
            }else if (s[i]==')'){
                if (cnt){
                    --cnt;
                    t.push_back(s[i]);
                }
            }else{
                t.push_back(s[i]);
            }
        }
        s=t;cnt=0;t.clear();
        for (int i = s.size()-1; i >= 0; --i) {
            if (s[i]==')'){
                ++cnt;
                t.push_back(s[i]);
            }else if (s[i]=='('){
                if (cnt){
                    --cnt;
                    t.push_back(s[i]);
                }
            }else{
                t.push_back(s[i]);
            }
        }
        std::reverse(t.begin(), t.end());
        return t;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}