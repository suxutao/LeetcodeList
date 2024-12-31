#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long appealSum(string s) {
        ll n=s.size(),ans=1;
        vector<ll>dp(n),pos[26];
        dp[0]=1;
        for (auto & po : pos) {
            po.push_back(-1);
        }
        for (int i = 0; i < n; ++i) {
            pos[s[i]-'a'].push_back(i);
        }
        for (int i = 1; i < n; ++i) {
            dp[i]=dp[i-1]+1;
            auto t=upper_bound(pos[s[i] - 'a'].rbegin(), pos[s[i] - 'a'].rend(),i,greater<>());
            dp[i]+=i-*t-1;
            ans+=dp[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().appealSum("abbca");
    return 0;
}