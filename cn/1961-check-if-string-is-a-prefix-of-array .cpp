#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n=words.size();
        string t;
        for (int i = 0; i < n; ++i) {
            t+=words[i];
            if (s==t)
                return true;
            if (t.size()>s.size())
                break;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}