#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        if (n==1)
            return grid[0][0];
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int temp=INT_MAX;
                for (int k = 0; k < n; ++k) {
                    if (k==j)
                        continue;
                    temp= min(temp,grid[i-1][k]);
                }
                grid[i][j]+=temp;
            }
        }
        return *min_element(grid.back().begin(), grid.back().end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}