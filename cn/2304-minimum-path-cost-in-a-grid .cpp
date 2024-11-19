#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minPathCost(vector<vector<int>> &grid, vector<vector<int>> &moveCost) {
        int m = grid.size(), n = grid[0].size();
        for (int i = m - 2; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                int res = INT_MAX;
                for (int k = 0; k < n; k++) {
                    res=min(res,grid[i+1][k]+moveCost[grid[i][j]][k]);
                }
                grid[i][j]+=res;
            }
        }
        return *min_element(grid[0].begin(), grid[0].end());
    }
};;;
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}