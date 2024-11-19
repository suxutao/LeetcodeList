#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int ge=0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i]==letter)
                ge++;
        }
        return ge*100/s.length();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}