#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string largestOddNumber(string num) {
        int pos=-1;
        for (int i = num.size()-1; i >= 0; --i) {
            if (num[i]&1){
                pos=i;
                break;
            }
        }
        if (~pos)
            return num.substr(0,pos+1);
        return "";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}