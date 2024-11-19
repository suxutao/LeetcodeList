#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string sortVowels(string s) {
        string s1;
        int t=0;
        unordered_set<char>S={'a','e','i','o','u','A','E','I','O','U'};
        for (int i = 0; i < s.size(); ++i) {
            if (S.find(s[i])!=S.end())
                s1.push_back(s[i]);
        }
        std::sort(s1.begin(), s1.end());
        for (int i = 0; i < s.size(); ++i) {
            if (S.find(s[i])!=S.end())
                s[i]=s1[t++];
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}