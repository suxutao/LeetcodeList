#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        ll ans=0;
        int m=grid.size(),n=grid[0].size();
        vector<int>hang(m,-1),lie(n,-1);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]){
                    ++hang[i];
                    ++lie[j];
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]){
                    ans+=lie[j]*hang[i];
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}