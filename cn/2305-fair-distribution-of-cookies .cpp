#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int distributeCookies(vector<int>& cookies, int k) {
        int n=cookies.size();
        vector<int>v(1<<n),dp;
        for (int i = 0; i < n; i++) {
            for (int j = 0,bit = 1 << i; j < bit; j++) {
                v[bit|j] = v[j] + cookies[i];
            }
        }
        dp.assign(v.begin(),v.end());
        for (int i = 1; i < k; ++i) {
            for (int j = (1 << n) - 1; j; j--) {
                for (int l = j; l; l = (l - 1) & j) {
                    dp[j] = min(dp[j], max(dp[j^l], v[l]));
                }
            }
        }
        return dp[(1<<n)-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}