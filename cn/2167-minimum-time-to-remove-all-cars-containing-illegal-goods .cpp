#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumTime(string s) {
        int n=s.size(),pre=0,ans=n;
        vector<int>suf(n+1);
        for (int i = n-1; i >= 0; --i) {
            suf[i]=suf[i+1];
            if (s[i]=='1'){
                suf[i]= min(suf[i]+2,n-i);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (s[i]=='1'){
                pre=min(pre+2,i+1);
            }
            ans= min(ans,pre+suf[i+1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}