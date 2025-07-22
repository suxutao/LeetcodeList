#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    string decodeAtIndex(string s, int k) {
        ll len=0,n=s.size();
        for (int i = 0; i < n; ++i) {
            if (isdigit(s[i])){
                len*=s[i]-'0';
            }else{
                len++;
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            if (isdigit(s[i])){
                len/=s[i]-'0';
                if (k>len){
                    k%=len;
                    if (k==0)
                        k=len;
                }
            }else{
                if (k==len)
                    return string(1,s[i]);
                len--;
            }
        }
        return "aaa";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}