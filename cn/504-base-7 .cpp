#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string convertToBase7(int num) {
        if (num==0)
            return "0";
        string s;
        bool fu=false;
        if (num<0){
            fu= true;
            num=-num;
        }
        while(num){
            s+=num%7+'0';
            num/=7;
        }
        if (fu)
            s+='-';
        std::reverse(s.begin(), s.end());
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}