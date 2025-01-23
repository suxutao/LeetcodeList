#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size(),cnt=0;
        if (m*n!=r*c)
            return mat;
        vector<vector<int>>ans(r,vector<int>(c));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ans[cnt/c][cnt%c]=mat[i][j];
                cnt++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}