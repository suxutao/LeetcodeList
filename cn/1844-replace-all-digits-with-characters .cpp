#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 0; i < s.size(); ++i) {
            if (i&1){
                s[i]+=s[i-1]-'0';
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}