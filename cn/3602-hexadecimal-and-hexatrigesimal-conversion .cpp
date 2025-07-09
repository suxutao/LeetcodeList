#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string concatHex36(int n) {
        int a=n*n,b=a*n;
        string s1,s2;
        while (a){
            int t=a%16;
            if (t<=9){
                s1.push_back(t+'0');
            }else{
                s1.push_back(t-10+'A');
            }
            a/=16;
        }
        while (b){
            int t=b%36;
            if (t<=9){
                s2.push_back(t+'0');
            }else{
                s2.push_back(t-10+'A');
            }
            b/=36;
        }
        ranges::reverse(s1);
        ranges::reverse(s2);
        return s1+s2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}