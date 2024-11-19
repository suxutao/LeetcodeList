#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        if (s.size()<=2)
            return s.size();
        int ans=0,cnt=0,l=1,r=1,n=s.size();
        while (r<n){
            cnt+=s[r]==s[r-1];
            while (cnt>1) {
                cnt -= s[l] == s[l - 1];
                ++l;
            }
            ans= max(ans,r-l+2);
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}