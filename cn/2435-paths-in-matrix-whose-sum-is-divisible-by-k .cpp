#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<vector<long long>>>arr(m,vector<vector<long long>>(n,vector<long long>(k)));
        arr[0][0][grid[0][0]%k]=1;
        for (int i = 1; i < m; ++i) {
            for (int j = 0; j < k; ++j) {
                int t=(grid[i][0]+j)%k;
                arr[i][0][t]=arr[i-1][0][j];
            }
        }
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < k; ++j) {
                int t=(grid[0][i]+j)%k;
                arr[0][i][t]=arr[0][i-1][j];
            }
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                for (int l = 0; l < k; ++l) {
                    int t=(grid[i][j]+l)%k;
                    arr[i][j][t]=(arr[i][j][t]+arr[i-1][j][l]+arr[i][j-1][l])%N;
                }
            }
        }
        return arr[m-1][n-1][0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}