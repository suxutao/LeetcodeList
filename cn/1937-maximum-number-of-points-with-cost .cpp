#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxPoints(vector<vector<int>>& points) {
        int m=points.size(),n=points[0].size();
        vector<ll>pre(n),suf(n);
        vector<vector<ll>>dp(m,vector<ll>(n));
        for (int i = 0; i < n; ++i) {
            dp[0][i]=points[0][i];
        }
        for (int i = 1; i < m; ++i) {
            pre[n-1]=dp[i-1][n-1]-(n-1);
            for (int j = n - 2; j >= 0; --j) {
                pre[j]= max(pre[j+1],dp[i-1][j]-j);
            }
            suf[0]=dp[i-1][0]-(n-1);
            for (int j = 1; j < n; ++j) {
                suf[j]= max(suf[j-1],dp[i-1][j]-n+j+1);
            }
            dp[i][0]=pre[0]+points[i][0];
            dp[i][n-1]=suf[n-1]+points[i][n-1];
            for (int j = 1; j < n - 1; ++j) {
                dp[i][j]= points[i][j]+max(dp[i-1][j], max(pre[j+1]+j,suf[j-1]+n-j-1));
            }
        }
        return ranges::max(dp[m-1]);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{1,5},{2,3},{4,2}};
    Solution().maxPoints(v);
    return 0;
}