#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minCost(int n, vector<vector<int>>& cost) {
        vector<array<array<ll,3>,3>>dp(n/2+1);
        cost.push_back({0,0,0});
        for (int i = 1; i <= n/2; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    if (j!=k){
                        dp[i][j][k]=cost[i-1][j]+cost[n-i][k];
                        ll MIN=LLONG_MAX;
                        for (int l = 0; l < 3; ++l) {
                            for (int m = 0; m < 3; ++m) {
                                if (l!=m&&l!=j&&m!=k)
                                MIN= min(MIN,dp[i-1][l][m]);
                            }
                        }
                        dp[i][j][k]+=MIN;
                    }
                }
            }
        }
        ll ans=LLONG_MAX;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (i!=j)
                    ans= min(ans,dp[n/2][i][j]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}