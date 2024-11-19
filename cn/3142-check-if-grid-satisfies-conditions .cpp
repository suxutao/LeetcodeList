#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (grid[j][i]!=grid[j-1][i])
                    return false;
            }
        }
        for (int i = 1; i < n; ++i) {
            if (grid[0][i]==grid[0][i-1])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}