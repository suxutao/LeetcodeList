#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        if (n==1)
            return 0;
        vector<int>pre(n),suf(n);
        pre[0]=s[0]=='a';
        suf[n-1]=s[n-1]=='b';
        for (int i = 1; i < n; ++i) {
            pre[i]=pre[i-1]+(s[i]=='a');
        }
        for (int i = n-2; i >= 0; --i) {
            suf[i]=suf[i+1]+(s[i]=='b');
        }
        int ans= max(pre[n-2],suf[1])+1;
        for (int i = 1; i < n - 1; ++i) {
            ans= max(ans,pre[i-1]+suf[i+1]+1);
        }
        return n-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}