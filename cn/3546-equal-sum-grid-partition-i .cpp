#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        ll sum=0,pre=0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                sum+=grid[i][j];
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                pre+=grid[i][j];
            }
            if (pre*2==sum)
                return true;
            else if (pre*2>sum)
                break;
        }
        pre=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                pre+=grid[j][i];
            }
            if (pre*2==sum)
                return true;
            else if (pre*2>sum)
                break;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}