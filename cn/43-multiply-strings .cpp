#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string multiply(string num1, string num2) {
        int one=0,two=0;
        for (int i = 0; i < num1.size(); ++i) {
            one*=10;
            one+=num1[i]-'0';
        }
        for (int i = 0; i < num2.size(); ++i) {
            two*=10;
            two+=num2[i]-'0';
        }
        return to_string(one*two);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}