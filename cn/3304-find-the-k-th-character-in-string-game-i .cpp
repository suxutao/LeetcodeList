#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while (s.size()<k){
            string t=s;
            for (auto &i: t) {
                ++i;
                if (i=='z'+1)
                    i='a';
            }
            s+=t;
        }
        return s[k-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}