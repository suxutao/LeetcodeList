#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string printBin(double num) {
        string s="0.";
        for (int i = 2; i < 32; ++i) {
            num*=2;
            if (num>=1){
                num--;
                s.push_back('1');
            }else{
                s.push_back('0');
            }
            if (!num) break;
        }
        return num?"ERROR":s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}