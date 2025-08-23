#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n=prices.size();
        vector<ll>pre(n+1),pres(n+1);
        for (int i = 0; i < n; ++i) {
            pre[i+1]=pre[i]+prices[i];
            pres[i+1]=pres[i]+prices[i]*strategy[i];
        }
        ll ans=pres[n];
        for (int i = 0; i <= n - k; ++i) {
            ans= max(ans,pre[i+k]-pre[i+k/2]+pres[n]-pres[i+k]+pres[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}