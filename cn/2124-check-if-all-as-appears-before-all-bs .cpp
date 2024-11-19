#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkString(string s) {
        auto pos=s.find('b');
        if (pos==-1)
            return true;
        for (int i = pos+1; i < s.size(); ++i) {
            if (s[i]=='a')
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}