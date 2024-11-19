#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>v(grid.size(),vector<int>(grid[0].size()));
        v[0][0]=grid[0][0];
        for (int i = 1; i < grid.size(); ++i) {
            v[i][0]=grid[i][0]+v[i-1][0];
        }
        for (int i = 1; i < grid[0].size(); ++i) {
            v[0][i]=grid[0][i]+v[0][i-1];
        }
        for (int i = 1; i < grid.size(); ++i) {
            for (int j = 1; j < grid[0].size(); ++j) {
                v[i][j]= min(v[i-1][j],v[i][j-1])+grid[i][j];
            }
        }
        return v[v.size()-1][v[0].size()-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}