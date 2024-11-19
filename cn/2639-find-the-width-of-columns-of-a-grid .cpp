#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                v[i]= max(v[i],(int)to_string(grid[j][i]).size());
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}