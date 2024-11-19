#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countSubstrings(string s, string t) {
        int ans=0,diff;
        for (int i = 0; i < s.size(); ++i) {
            for (int j = 0; j < t.size(); ++j) {
                diff=0;
                for (int k = 0; k<s.size()-i&&k<t.size()-j; ++k) {
                    diff+=s[i+k]!=t[j+k];
                    if (diff>1)
                        break;
                    else if (diff==1)
                        ans++;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}