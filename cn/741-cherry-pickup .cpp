#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int f[110][55][55]={};
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        for (int i = 0; i <= n * 2; ++i) {
            for (int j = 0; j <= n; ++j) {
                for (int k = 0; k <= n; ++k) {
                    f[i][j][k]=INT_MIN;
                }
            }
        }
        f[0][1][1] = grid[0][0];
        for (int t = 1; t < n * 2 - 1; t++) {
            for (int j = max(t - n + 1, 0); j <= min(t, n - 1); j++) {
                if (grid[t - j][j] < 0) continue;
                for (int k = j; k <= min(t, n - 1); k++) {
                    if (grid[t - k][k] < 0) continue;
                    f[t][j + 1][k + 1] = max({f[t - 1][j + 1][k + 1], f[t - 1][j + 1][k], f[t - 1][j][k + 1], f[t - 1][j][k]}) +
                                         grid[t - j][j] + (k != j ? grid[t - k][k] : 0);
                }
            }
        }
        return max(f[n * 2 - 2][n][n], 0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}