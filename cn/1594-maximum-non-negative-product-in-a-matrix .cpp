#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int maxProductPath(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<ll>>vmin(m,vector<ll>(n));
        vector<vector<ll>>vmax(m,vector<ll>(n));
        vmax[0][0]=vmin[0][0]=grid[0][0];
        for (int i = 1; i < m; ++i) {
            vmax[i][0]=vmin[i][0]=grid[i][0]*vmin[i-1][0];
        }
        for (int i = 1; i < n; ++i) {
            vmax[0][i]=vmin[0][i]=grid[0][i]*vmin[0][i-1];
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (grid[i][j]>=0){
                    vmax[i][j]= max(vmax[i-1][j],vmax[i][j-1])*grid[i][j];
                    vmin[i][j]= min(vmin[i-1][j],vmin[i][j-1])*grid[i][j];
                }else{
                    vmin[i][j]= max(vmax[i-1][j],vmax[i][j-1])*grid[i][j];
                    vmax[i][j]= min(vmin[i-1][j],vmin[i][j-1])*grid[i][j];
                }
            }
        }
        return vmax.back().back()<0?-1:vmax.back().back()%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}