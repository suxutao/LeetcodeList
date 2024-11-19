#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int romanToInt(string s) {
        int value=0;
        for (int i = 0; i < s.length(); ++i) {
            switch (s[i]) {
                case 'M':value+=1000;
                    break;
                case 'D':value+=500;
                    break;
                case 'C':
                    if (i<s.length()-1&&(s[i+1]=='D'||s[i+1]=='M'))
                        value-=100;
                    else
                        value+=100;
                    break;
                case 'L':value+=50;
                    break;
                case 'X':
                    if (i<s.length()-1&&(s[i+1]=='L'||s[i+1]=='C'))
                        value-=10;
                    else
                        value+=10;
                    break;
                case 'V':value+=5;
                    break;
                case 'I':
                    if (i<s.length()-1&&(s[i+1]=='V'||s[i+1]=='X'))
                        value-=1;
                    else
                        value+=1;
                    break;
            }
        }
        return value;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}