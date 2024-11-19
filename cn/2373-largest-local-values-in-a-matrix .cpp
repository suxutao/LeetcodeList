#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>v(n-2,vector<int>(n-2));
        for (int i = 0; i < n - 2; ++i) {
            for (int j = 0; j < n - 2; ++j) {
                int MAX=0;
                for (int k = i; k <= i + 2; ++k) {
                    for (int l = j; l <= j + 2; ++l) {
                        MAX= max(MAX,grid[k][l]);
                    }
                }
                v[i][j]=MAX;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}