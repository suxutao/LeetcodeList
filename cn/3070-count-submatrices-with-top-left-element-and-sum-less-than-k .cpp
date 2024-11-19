#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size(),ans=grid[0][0]<=k;
        vector<vector<int>>v(m,vector<int>(n));
        for (int i = 1; i < m; ++i) {
            grid[i][0]+=grid[i-1][0];
            if (grid[i][0]<=k)
                ++ans;
        }
        for (int i = 1; i < n; ++i) {
            grid[0][i]+=grid[0][i-1];
            if (grid[0][i]<=k)
                ++ans;
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                grid[i][j]+=grid[i-1][j]+grid[i][j-1]-grid[i-1][j-1];
                if (grid[i][j]<=k)
                    ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}