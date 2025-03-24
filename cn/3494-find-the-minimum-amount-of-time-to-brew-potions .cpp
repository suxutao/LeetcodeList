#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n=skill.size(),m=mana.size();
        vector<ll>dp(n);
        for (int i = 0; i < m; ++i) {
            dp[0]=dp[0]+skill[0]*mana[i];
            for (int j = 1; j < n; ++j) {
                dp[j]= max(dp[j-1],dp[j])+skill[j]*mana[i];
            }
            for (int j = n - 2; j >= 0; --j) {
                dp[j]=dp[j+1]-skill[j+1]*mana[i];
            }
        }
        return dp[n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v1{1,5,2,4},v2{5,1,4,2};
    Solution().minTime(v1,v2);
    return 0;
}