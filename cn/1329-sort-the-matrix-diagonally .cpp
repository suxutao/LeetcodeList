#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>>v1(m),v2(n);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; i+j < m&&j<n; ++j) {
                v1[i].push_back(mat[i+j][j]);
            }
            std::sort(v1[i].begin(), v1[i].end());
            for (int j = 0; i+j < m&&j<n; ++j) {
                mat[i+j][j]=v1[i][j];
            }
        }
        for (int i = 1; i < n; ++i) {
            for (int j = 0; i+j < n&&j<m; ++j) {
                v2[i].push_back(mat[j][i+j]);
            }
            std::sort(v2[i].begin(), v2[i].end());
            for (int j = 0; i+j < n&&j<m; ++j) {
                mat[j][i+j]=v2[i][j];
            }
        }
        return mat;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}