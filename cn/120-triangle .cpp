#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        for (int i = 1; i < n; ++i) {
            triangle[i][0]+=triangle[i-1][0];
        }
        for (int i = 0; i < n - 1; ++i) {
            triangle[i].push_back(INT_MAX);
        }
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j <= i; ++j) {
                triangle[i][j]+= min(triangle[i-1][j-1],triangle[i-1][j]);
            }
        }
        return *min_element(triangle[n - 1].begin(), triangle[n - 1].end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}