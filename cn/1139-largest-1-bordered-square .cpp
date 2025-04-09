#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largest1BorderedSquare(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=grid[0][0];
        vector<vector<int>>up(grid),left(grid);
        for (int i = 1; i < n; ++i) {
            if (left[0][i]){
                ans=1;
                left[0][i]+=left[0][i-1];
            }
        }
        for (int i = 1; i < m; ++i) {
            if (up[i][0]){
                ans=1;
                up[i][0]+=up[i-1][0];
            }
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (grid[i][j]){
                    up[i][j]+=up[i-1][j];
                    left[i][j]+=left[i][j-1];
                    int t= min(up[i][j],left[i][j]);
                    for (int k = t; k; --k) {
                        if (k<=ans)
                            break;
                        if (up[i][j-k+1]>=k&&left[i-k+1][j]>=k){
                            ans= max(ans,k);
                            break;
                        }
                    }
                }
            }
        }
        return ans*ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}