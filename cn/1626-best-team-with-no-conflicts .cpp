#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=scores.size(),ans=0;
        vector<pii>v(n);
        vector<int>dp(n);
        for (int i = 0; i < n; ++i) {
            v[i]={scores[i],ages[i]};
        }
        sort(v.begin(), v.end(),[](pii&a,pii&b){
            if (a.second==b.second)
                return a.first<b.first;
            return a.second<b.second;
        });
        for (int i = 0; i < n; ++i) {
            dp[i]=v[i].first;
        }
        ans=dp[0];
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (v[i].first>=v[j].first||v[i].second==v[j].second){
                    dp[i]=max(dp[i],dp[j]+v[i].first);
                    ans= max(ans,dp[i]);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v1{4,5,6,5},v2{2,1,2,1};
    cout<<Solution().bestTeamScore(v1,v2);
    return 0;
}