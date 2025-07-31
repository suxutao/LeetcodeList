#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long numOfSubsequences(string s) {
        int n=s.size();
        ll lct=0;
        vector<ll>pre_l(n),suf_t(n),pre_lc(n),suf_ct(n);
        if (s[0]=='L')
            pre_l[0]=1;
        if (s.back()=='T')
            suf_t[n-1]=1;
        for (int i = 1; i < n; ++i) {
            pre_l[i]=pre_l[i-1]+(s[i]=='L');
            pre_lc[i]=pre_lc[i-1];
            if (s[i]=='C')
                pre_lc[i]+=pre_l[i-1];
            if (s[i]=='T')
                lct+=pre_lc[i-1];
        }
        for (int i = n - 2; i >= 0; --i) {
            suf_t[i]=suf_t[i+1]+(s[i]=='T');
            suf_ct[i]=suf_ct[i+1];
            if (s[i]=='C')
                suf_ct[i]+=suf_t[i+1];
        }
        ll ans=max(pre_lc[n-1],suf_ct[0]);
        for (int i = 0; i < n - 1; ++i) {
            ans=max(max(ans,pre_l[i]*suf_t[i+1]),max(pre_lc[i],suf_ct[i+1]));
        }
        return ans+lct;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}