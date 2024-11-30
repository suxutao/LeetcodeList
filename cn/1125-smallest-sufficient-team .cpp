#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        ll n=people.size(),m=req_skills.size(),u=(1ll<<m)-1;
        vector<ll>dp(1<<m,(1ll<<n)-1),v(n);
        vector<int>ans;
        unordered_map<string,ll>ma;
        dp[0]=0;
        for (int i = 0; i < m; ++i) {
            ma[req_skills[i]]=i;
        }
        for (int i = 0; i < n; ++i) {
            for (auto &item: people[i]){
                v[i]|=1<<ma[item];
            }
        }
        for (int i = 0; i < 1 << m; ++i) {
            if (dp[i]<(1ll<<n)-1){
                for (int j = 0; j < n; ++j) {
                    if (__builtin_popcountll(dp[i])+1<__builtin_popcountll(dp[i|v[j]]))
                        dp[i|v[j]]=dp[i]|(1ll<<j);
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            if (dp[u]>>i&1)
                ans.push_back(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}