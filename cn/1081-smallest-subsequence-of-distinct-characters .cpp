#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int>m;
        unordered_set<char>se;
        string ans;
        for (int i = 0; i < s.size(); ++i) {
            ++m[s[i]];
        }
        for (int i = 0; i < s.size(); ++i) {
            --m[s[i]];
            if (se.contains(s[i]))
                continue;
            while (!ans.empty()&&ans.back()>=s[i]&&m[ans.back()]){
                se.erase(ans.back());
                ans.pop_back();
            }
            se.insert(s[i]);
            ans.push_back(s[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}