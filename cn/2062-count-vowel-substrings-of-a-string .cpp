#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countVowelSubstrings(string word) {
        int n=word.size(),ans=0;
        unordered_set<char>ss{'a','e','i','o','u'};
        for (int i = 0; i < n; ++i) {
            for (int len = 5; len <= n-i; ++len) {
                string s=word.substr(i,len);
                unordered_set<char>se(s.begin(),s.end());
                if (se==ss)
                    ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}