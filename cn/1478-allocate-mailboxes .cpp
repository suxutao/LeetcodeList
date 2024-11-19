#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDistance(vector<int>& houses, int k) {
        int n=houses.size();
        sort(houses.begin(), houses.end());
        vector<vector<int>>dp(n,vector<int>(k+1,INT_MAX/2));
        vector<vector<int>>cost(n,vector<int>(n));
        for (int i = n-2; i >=0 ; --i) {
            for (int j = i+1; j < n; ++j) {
                cost[i][j]=cost[i+1][j-1]+houses[j]-houses[i];
            }
        }
        for (int i = 0; i < n; ++i) {
            dp[i][1]=cost[0][i];
            for (int j = 2; j <= k; ++j) {
                for (int l = 0; l < i; ++l) {
                    dp[i][j]=min(dp[i][j],dp[l][j-1]+cost[l+1][i]);
                }
            }
        }
        return dp[n-1][k];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}