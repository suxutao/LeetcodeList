#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        for (int i = 0; i < n; ++i) {
            vector<int>v;
            for (int j = 0; j < n-i; ++j) {
                v.push_back(grid[i+j][j]);
            }
            ranges::sort(v,greater<>());
            for (int j = 0; j < n-i; ++j) {
                grid[i+j][j]=v[j];
            }
        }
        for (int i = 1; i < n; ++i) {
            vector<int>v;
            for (int j = 0; j < n-i; ++j) {
                v.push_back(grid[j][i+j]);
            }
            ranges::sort(v);
            for (int j = 0; j < n-i; ++j) {
                grid[j][i+j]=v[j];
            }
        }
        return grid;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}