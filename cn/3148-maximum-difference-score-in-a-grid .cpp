#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxScore(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=INT_MIN;
        vector<vector<int>>v(m,vector<int>(n));
        v[0][0]=grid[0][0];
        for (int i = 1; i < m; ++i) {
            ans= max(ans,grid[i][0]-v[i-1][0]);
            v[i][0]= min(v[i-1][0],grid[i][0]);
        }
        for (int i = 1; i < n; ++i) {
            ans= max(ans,grid[0][i]-v[0][i-1]);
            v[0][i]= min(v[0][i-1],grid[0][i]);
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                ans= max(ans,grid[i][j]-min(v[i-1][j],v[i][j-1]));
                v[i][j]= min({grid[i][j],v[i-1][j],v[i][j-1]});
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}