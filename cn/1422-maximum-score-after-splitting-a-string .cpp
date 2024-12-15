#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxScore(string s) {
        int n=s.size(),pre=0,ans=0;
        vector<int>suf(n+1);
        for (int i = n-1; i >= 0; --i) {
            suf[i]=suf[i+1]+(s[i]=='1');
        }
        for (int i = 0; i < n-1; ++i) {
            pre+=s[i]=='0';
            ans= max(ans,pre+suf[i+1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}