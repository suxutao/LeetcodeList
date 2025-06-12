#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int n=s.size(),p0=0,p1=0,ans=0;
        vector<int>pre(n);
        pre[0]=s[0]=='0';
        for (int i = 1; i < n; ++i) {
            if (s[i]=='0'){
                pre[i]=pre[i-1]+1;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (s[i]=='1'&&p1<p0){
                p1++;
                ans= max(ans,p1*2);
            }else if (s[i]=='0'){
                p0=pre[i];
                p1=0;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}