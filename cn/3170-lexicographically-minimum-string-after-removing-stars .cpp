#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string clearStars(string s) {
        stack<int>st[26];
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]!='*'){
                st[s[i]-'a'].push(i);
            }else{
                for (auto &j: st){
                    if (!j.empty()){
                        s[j.top()]='*';
                        j.pop();
                        break;
                    }
                }
            }
        }
        s.erase(remove(s.begin(), s.end(),'*'),s.end());
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}