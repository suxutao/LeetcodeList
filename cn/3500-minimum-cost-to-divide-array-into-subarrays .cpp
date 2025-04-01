#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minimumCost(vector<int>& nums, vector<int>& cost, int k) {
        ll n=nums.size();
        vector<ll>pre(n+1),prec(n+1),dp(n+1,LLONG_MAX);
        for (int i = 0; i < n; ++i) {
            pre[i+1]=pre[i]+nums[i];
            prec[i+1]=prec[i]+cost[i];
        }
        dp[0]=0;
        for (int i = 1; i <= n; ++i) {
            for (int j = i - 1; j >= 0; --j) {
                dp[i]= min(dp[i],dp[j]+pre[i]*(prec[i]-prec[j])+(prec[n]-prec[j])*k);
            }
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}