#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(n);
        cuts.push_back(0);
        sort(cuts.begin(), cuts.end());
        int m=cuts.size();
        vector<vector<int>>dp(m,vector<int>(m));
        for (int i = m-3; i >= 0; --i) {
            for (int j = i+2; j < m; ++j) {
                int ans=INT_MAX;
                for (int k = i+1; k < j; ++k) {
                    ans= min(ans,dp[i][k]+dp[k][j]);
                }
                dp[i][j]=ans+cuts[j]-cuts[i];
            }
        }
        return dp[0][m-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}