#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>vv(m,vector<int>(n));
        vector<int>row(m,0);vector<int>col(n,0);
        for (int k = 0; k < m; ++k) {
            for (int i = 0; i < n; ++i) {
                if (grid[k][i])
                    row[k]++;
            }
        }
        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < m; ++i) {
                if (grid[i][k])
                    col[k]++;
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                vv[i][j]=2*(row[i]+col[j])-m-n;
            }
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}