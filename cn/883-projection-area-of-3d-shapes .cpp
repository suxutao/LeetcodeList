#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n=grid.size(),ans=n*n;
        for (int i = 0; i < n; ++i) {
            int mc=0,mr=0;
            for (int j = 0; j < n; ++j) {
                mc=max(mc,grid[i][j]);
                mr=max(mr,grid[j][i]);
                if (grid[i][j]==0)
                    --ans;
            }
            ans+=mc+mr;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}