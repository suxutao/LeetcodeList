#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>v(m,vector<int>(n));
        vector<vector<set<int>>>pre(m,vector<set<int>>(n)),suf(m,vector<set<int>>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i&&j)
                    pre[i][j]=pre[i-1][j-1];
                pre[i][j].insert(grid[i][j]);
            }
        }
        for (int i = m-1; i >= 0; --i) {
            for (int j = n-1; j >= 0; --j) {
                if (i<m-1&&j<n-1)
                    suf[i][j]=suf[i+1][j+1];
                suf[i][j].insert(grid[i][j]);
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int a=0,b=0;
                if (i&&j)
                    a=pre[i-1][j-1].size();
                if (i<m-1&&j<n-1)
                    b=suf[i+1][j+1].size();
                v[i][j]= abs(a-b);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}