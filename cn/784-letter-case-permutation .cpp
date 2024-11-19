#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string>v;
    void dfs(int pos,string&s){
        if (pos==s.size())
            return;
        if (isupper(s[pos])){
            s[pos]+='a'-'A';
            v.push_back(s);
            dfs(pos+1,s);
            s[pos]-='a'-'A';
        }else if (islower(s[pos])){
            s[pos]-='a'-'A';
            v.push_back(s);
            dfs(pos+1,s);
            s[pos]+='a'-'A';
        }
        dfs(pos+1,s);
    }
    vector<string> letterCasePermutation(string s) {
        v.push_back(s);
        dfs(0,s);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().letterCasePermutation("a1b2");
    return 0;
}