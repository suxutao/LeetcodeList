#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkZeroOnes(string s) {
        int one=0,zero=0,o=0,z=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='0'){
                z++;o=0;
                zero= max(zero,z);
            }else{
                o++;z=0;
                one= max(one,o);
            }
        }
        return one>zero;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}