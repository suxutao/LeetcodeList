#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n=graph.size(),ans=INT_MAX;
        vector<vector<int>>dp(n,vector<int>(1<<n,INT_MAX/2)),dis(n,vector<int>(n,INT_MAX/2));
        for (int i = 0; i < n; ++i) {
            dp[i][1<<i]=0;
            for (auto &j: graph[i]){
                dis[i][j]=dis[j][i]=1;
            }
        }
        for (int k = 0; k < n; ++k) {
            for (int j = 0; j < n; ++j) {
                for (int i = 0; i < n; ++i) {
                    dis[i][j]= min(dis[i][j],dis[i][k]+dis[k][j]);
                }
            }
        }
        for (int i = 1; i < 1 << n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i>>j&1){
                    for (int k = 0; k < n; ++k) {
                        if (i>>k&1&&k!=j){
                            dp[j][i]= min(dp[j][i],dp[k][i^(1<<j)]+dis[j][k]);
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            ans= min(ans,dp[i][(1<<n)-1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}