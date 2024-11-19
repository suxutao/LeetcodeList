#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>vv(matrix.size(),vector<int>(matrix[0].size()));
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                vv[j][matrix.size()-i-1]=matrix[i][j];
            }
        }
        swap(matrix,vv);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}