#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int longestSubsequence(string s, int k) {
        int n=s.size(),ans=0;
        ll sum=0;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i]=='1'){
                if (ans<60&&sum+(1ll<<ans)<=k){
                    sum+=1ll<<ans;
                    ans++;
                }
            }else{
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