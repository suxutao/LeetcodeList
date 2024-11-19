#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        for (int i = 1; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int temp=matrix[i-1][j];
                if (j>0)
                    temp= min(temp,matrix[i-1][j-1]);
                if (j<n-1)
                    temp= min(temp,matrix[i-1][j+1]);
                matrix[i][j]+=temp;
            }
        }
        return *min_element(matrix.back().begin(), matrix.back().end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}