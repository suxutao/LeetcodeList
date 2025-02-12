#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>v(m,vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int x=(i*n+j+k)%(m*n);
                v[x/n][x%n]=grid[i][j];
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}