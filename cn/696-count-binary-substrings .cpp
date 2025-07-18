#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size(),a0=0,a1=0,ans=0;
        if (s[0]=='0')
            a0=1;
        else
            a1=1;
        for (int i = 1; i < n; ++i) {
            if (s[i]=='0'){
                if (s[i-1]=='0'){
                    a0++;
                }else{
                    a0=1;
                }
                if (a0<=a1)
                    ans++;
            }else{
                if (s[i-1]=='1'){
                    a1++;
                }else{
                    a1=1;
                }
                if (a1<=a0)
                    ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}