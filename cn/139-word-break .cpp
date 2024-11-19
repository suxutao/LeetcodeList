#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>u(wordDict.begin(),wordDict.end());
        vector<bool>v(s.length()+1,false);
        v[0]= true;
        for (int i = 0; i <= s.length(); ++i) {
            for (int j = 0; j < i; ++j) {
                string word = s.substr(j, i - j);
                if (u.find(word) != u.end() && v[j]) {
                    v[i] = true;
                    break;
                }
            }
        }
        return v[s.length()];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}