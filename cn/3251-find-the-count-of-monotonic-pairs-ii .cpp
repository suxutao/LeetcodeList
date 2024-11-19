#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int countOfPairs(vector<int>& nums) {
        int n=nums.size(),m=ranges::max(nums);
        ll ans=0;
        vector<vector<ll>>dp(n,vector<ll>(m+1));
        vector<ll>pre(m+1);
        for (int i = 0; i <= nums[0]; ++i) {
            dp[0][i]=1;
        }
        for (int i = 1; i < n; ++i) {
            partial_sum(dp[i - 1].begin(), dp[i - 1].end(),pre.begin());
            for (int j = 0; j <= nums[i]; ++j) {
                int temp=j+min(nums[i-1]-nums[i],0);
                if (temp>=0)
                    dp[i][j]=pre[temp]%N;
            }
        }
        for (int i = 0; i <= nums.back(); ++i) {
            ans=(ans+dp[n-1][i])%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}