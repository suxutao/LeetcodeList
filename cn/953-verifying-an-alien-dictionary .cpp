#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,char>m;
        for (int i = 0; i < order.size(); ++i) {
            m[order[i]]=i+'a';
        }
        for (auto &s: words){
            for (int i = 0; i < s.size(); ++i) {
                s[i]=m[s[i]];
            }
        }
        for (int i = 0; i < words.size() - 1; ++i) {
            if (words[i+1]<words[i])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}