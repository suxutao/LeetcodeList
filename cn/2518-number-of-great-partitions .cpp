#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    ll fast(ll a,ll x){
        ll ans=1;
        while (x){
            if (x&1)
                ans=ans*a%N;
            x>>=1;
            a=a*a%N;
        }
        return ans;
    }
    int countPartitions(vector<int>& nums, int k) {
        if (accumulate(nums.begin(), nums.end(),0ll)<2*k)
            return 0;
        int n=nums.size();
        ll sum=0;
        vector<ll>dp(k);
        dp[0]=1;
        for (int i = 0; i < n; ++i) {
            for (int j = k-1; j >= nums[i]; --j) {
                dp[j]=(dp[j]+dp[j-nums[i]])%N;
            }
        }
        for (int i = 0; i < k; ++i) {
            sum=(sum+dp[i])%N;
        }
        return (fast(2,n)-2*sum+N)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}