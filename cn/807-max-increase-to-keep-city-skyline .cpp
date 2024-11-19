#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int ans=0,m=grid.size(),n=grid[0].size();
        vector<int>v1(m,0),v2(n,0);
        for (int i = 0; i < m; ++i) {
            v1[i]=*max_element(grid[i].begin(),grid[i].end());
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[j][i]>v2[i])
                    v2[i]=grid[j][i];
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ans+= max(min(v1[i],v2[j])-grid[i][j],0);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}