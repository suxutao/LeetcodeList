#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if (words.size()!=s.length())
            return false;
        for (int i = 0; i < s.length(); ++i) {
            if (words[i][0]!=s[i])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}