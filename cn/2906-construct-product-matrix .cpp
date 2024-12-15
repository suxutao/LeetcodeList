#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),pre=1;
        vector<int>suf(m*n+1);
        vector<vector<int>>ans(m,vector<int>(n));
        suf.back()=1;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                grid[i][j]%=12345;
            }
        }
        for (int i = m*n-1; i >= 0; --i) {
            suf[i]=suf[i+1]%12345*grid[i/n][i%n]%12345;
        }
        for (int i = 0; i < m * n; ++i) {
            ans[i/n][i%n]=pre*suf[i+1]%12345;
            pre=(pre*grid[i/n][i%n])%12345;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}