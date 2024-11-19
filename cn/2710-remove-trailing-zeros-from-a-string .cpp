#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string removeTrailingZeros(string num) {
        int pos=-1;
        for (int i = num.size()-1; i >= 0; --i) {
            if (num[i]!='0'){
                pos=i;
                break;
            }
        }
        string s="";
        if (~pos)
            s=num.substr(0,pos+1);
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}