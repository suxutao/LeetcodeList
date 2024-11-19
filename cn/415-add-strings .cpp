#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string addStrings(string num1, string num2) {
        string s;
        int a,b,c=0,i,j;
        if (num1.size()>num2.size()){
            string zero;
            for (int k = 0; k < num1.size() - num2.size(); ++k) {
                zero+='0';
            }
            num2=zero+num2;
        }else if (num1.size()<num2.size()){
            string zero;
            for (int k = 0; k < num2.size() - num1.size(); ++k) {
                zero+='0';
            }
            num1=zero+num1;
        }
        for (i=num1.size()-1,j=num2.size()-1;i>=0&&j>=0;--i,--j) {
            a=num1[i]+num2[j]-'0'-'0'+c;
            if (a<10){
                b=a;c=0;
            }else{
                b=a-10;c=1;
            }
            s+=(b+'0');
        }
        if (c)
            s+='1';
        std::reverse(s.begin(), s.end());
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}