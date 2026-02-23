#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    ll maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        ll n=nums1.size(),m=nums2.size();
        vector<vector<vector<ll>>>dp(n+1,vector<vector<ll>>(m+1,vector<ll>(k+1,LLONG_MIN/2)));
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= m; ++j) {
                dp[i][j][0]=0;
            }
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                for (int l = 1; l <= k; ++l) {
                    dp[i][j][l]=max((ll)nums1[i-1]*nums2[j-1]+dp[i-1][j-1][l-1],max(dp[i-1][j][l],dp[i][j-1][l]));
                }
            }
        }
        return dp[n][m][k];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}