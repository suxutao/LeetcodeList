#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool doesAliceWin(string s) {
        set<char>se={'a','e','i','o','u'};
        int n=0;
        for (auto &i: s){
            if (se.contains(i))
                ++n;
        }
        return n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}