#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCost(int maxTime, vector<vector<int>>& edges, vector<int>& passingFees) {
        int n=passingFees.size();
        vector<vector<int>>dp(maxTime+1,vector<int>(n,INT_MAX/2));
        dp[0][0]=passingFees[0];
        for (int i = 1; i <= maxTime; ++i) {
            for (int j = 0; j < edges.size(); ++j) {
                int a=edges[j][0],b=edges[j][1],c=edges[j][2];
                if (i>=c) {
                    dp[i][a]=min(dp[i][a],dp[i-c][b]+passingFees[a]);
                    dp[i][b]=min(dp[i][b],dp[i-c][a]+passingFees[b]);
                }
            }
        }
        int ans=INT_MAX/2;
        for (int i = 0; i <= maxTime; ++i) {
            ans=min(ans,dp[i][n-1]);
        }
        return ans==INT_MAX/2?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}