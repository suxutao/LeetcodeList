#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int shi1,shi2,xu1,xu2,ans1,ans2;
        int pos1=num1.find('+'),pos2=num2.find('+');
        shi1= stoi(num1.substr(0,pos1));
        shi2= stoi(num2.substr(0,pos2));
        xu1= stoi(num1.substr(pos1+1,num1.size()-pos1-1));
        xu2= stoi(num2.substr(pos2+1,num2.size()-pos2-1));
        ans1=shi1*shi2-xu1*xu2;
        ans2=xu2*shi1+xu1*shi2;
        return to_string(ans1)+'+'+to_string(ans2)+'i';
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}