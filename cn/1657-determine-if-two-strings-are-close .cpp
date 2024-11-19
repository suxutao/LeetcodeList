#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_set<char>s1(word1.begin(),word1.end()),s2(word2.begin(),word2.end());
        for (auto &i: s2){
            if (!s1.contains(i))
                return false;
        }
        for (auto &i: s1){
            if (!s2.contains(i))
                return false;
        }
        unordered_map<char,int>m,n;
        multiset<int>s;
        for (auto &i: word1){
            ++m[i];
        }
        for (auto &i: word2){
            ++n[i];
        }
        for (auto &[_,b]: m){
            s.insert(b);
        }
        for (auto &[_,b]: n){
            s.extract(b);
        }
        return s.empty();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}