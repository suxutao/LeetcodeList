#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int m=matrix.size(),n=matrix[0].size();
        for (int i = 1; i < n; ++i) {
            matrix[0][i]^=matrix[0][i-1];
        }
        for (int i = 1; i < m; ++i) {
            matrix[i][0]^=matrix[i-1][0];
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                matrix[i][j]^=matrix[i-1][j]^matrix[i][j-1]^matrix[i-1][j-1];
            }
        }
        for (int i = 0; i < m; ++i) {
            v.insert(v.end(),matrix[i].begin(),matrix[i].end());
        }
        std::sort(v.begin(), v.end(),greater<>());
        return v[k-1];

    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}