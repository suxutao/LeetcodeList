#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    char processStr(string s, long long k) {
        ll n=s.size(),len=0,i;
        for (i = 0; i < n; ++i) {
            if (s[i]=='*'){
                if (len>0)
                    --len;
            }else if (s[i]=='#'){
                len<<=1;
            }else if (s[i]=='%'){

            }else{
                ++len;
            }
        }
        if (k>=len)
            return '.';
        for (i = n - 1; i >= 0; --i) {
            if (s[i]=='*'){
                ++len;
            }else if (s[i]=='#'){
                len>>=1;
                if (k>=len)
                    k-=len;
            }else if (s[i]=='%'){
                k=len-k-1;
            }else{
                --len;
                if (k==len)
                    return s[i];
            }
        }
        return 'a';
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}