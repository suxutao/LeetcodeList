#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>v;
        for (char i = s[0]; i <= s[3]; ++i) {
            for (char j = s[1]; j <= s[4]; ++j) {
                string ss;
                ss.push_back(i);
                ss.push_back(j);
                v.push_back(ss);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}