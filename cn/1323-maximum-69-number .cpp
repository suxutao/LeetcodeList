#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        for (int j = 0; j < s.length(); ++j) {
            if (s[j]=='6'){
                s[j]='9';
                break;
            }
        }
        return stoi(s);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}