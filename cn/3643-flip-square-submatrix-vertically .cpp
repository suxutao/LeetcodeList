#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        vector<vector<int>>ans(grid);
        for (int i = x; i < x+k; ++i) {
            for (int j = y; j < y+k; ++j) {
                ans[i][j]=grid[k-(i-(x-1))+x][j];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}