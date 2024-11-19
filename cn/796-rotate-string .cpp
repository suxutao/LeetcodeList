#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool rotateString(string s, string goal) {
        string a;
        for (int i = 0; i <= s.length() - 1; ++i) {
            a=s.substr(i,s.length()-i)+s.substr(0,i);
            if (a==goal)
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}