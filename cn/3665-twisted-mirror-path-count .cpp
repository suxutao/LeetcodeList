#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int uniquePaths(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        ll dp[501][501][2]{1};
        for (int i = 1; i < m; ++i) {
            dp[i][0][0]=dp[i-1][0][0];
            if (grid[i][0])
                break;
        }
        dp[0][0][0]=0;
        dp[0][0][1]=1;
        for (int i = 1; i < n; ++i) {
            dp[0][i][1]=dp[0][i-1][1];
            if (grid[0][i])
                break;
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (grid[i-1][j]){
                    dp[i][j][0]=dp[i-1][j][1];
                }else{
                    dp[i][j][0]=(dp[i-1][j][0]+dp[i-1][j][1])%N;
                }
                if (grid[i][j-1]){
                    dp[i][j][1]=dp[i][j-1][0];
                }else{
                    dp[i][j][1]=(dp[i][j-1][0]+dp[i][j-1][1])%N;
                }
            }
        }
        return (dp[m-1][n-1][0]+dp[m-1][n-1][1])%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}