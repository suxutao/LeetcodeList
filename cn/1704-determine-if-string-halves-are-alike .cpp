#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_set<char>se={'a','e','i','o','u','A','E','I','O','U'};
    bool halvesAreAlike(string s) {
        int temp=0;
        for (int i = 0; i < s.size() / 2; ++i) {
            if (se.count(s[i]))
                temp++;
        }
        for (int i = s.size()/2; i < s.size(); ++i) {
            if (se.count(s[i]))
                temp--;
        }
        return temp==0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}