#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int countPathsWithXorValue(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<array<ll,16>>>dp(m,vector<array<ll,16>>(n));
        dp[0][0][grid[0][0]]=1;
        for (int i = 1; i < m; ++i) {
            for (int a = 0; a < 16; ++a) {
                dp[i][0][a^grid[i][0]]=dp[i-1][0][a];
            }
        }
        for (int j = 1; j < n; ++j) {
            for (int a = 0; a < 16; ++a) {
                dp[0][j][a^grid[0][j]]=dp[0][j-1][a];
            }
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                for (int a = 0; a < 16; ++a) {
                    dp[i][j][a^grid[i][j]]=(dp[i-1][j][a]+dp[i][j-1][a])%N;
                }
            }
        }
        return dp[m-1][n-1][k];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}