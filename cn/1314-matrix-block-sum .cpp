#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>>v(m,vector<int>(n));
        for (int i = 1; i < m; ++i) {
            mat[i][0]+=mat[i-1][0];
        }
        for (int i = 1; i < n; ++i) {
            mat[0][i]+=mat[0][i-1];
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                mat[i][j]+=mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1];
            }
        }
        mat.insert(mat.begin(),vector<int>(n));
        for (int i = 0; i <= m; ++i) {
            mat[i].insert(mat[i].begin(),0);
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int x1= max(0,j-k),x2= min(n,j+k+1);
                int y1= max(0,i-k),y2= min(m,i+k+1);
                v[i][j]=mat[y2][x2]-mat[y2][x1]-mat[y1][x2]+mat[y1][x1];
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}