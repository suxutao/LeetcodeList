#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> goodSubsetofBinaryMatrix(vector<vector<int>>& grid) {
        unordered_map<int, int> mp;
        int m = grid.size();
        int n = grid[0].size();
        for (int j = 0; j < m; j++) {
            int st = 0;
            for (int i = 0; i < n; i++) {
                st |= (grid[j][i] << i);
            }
            mp[st] = j;
        }
        if (mp.count(0)) {
            return {mp[0]};
        }
        for (auto [x, i]: mp) {
            for (auto [y, j]: mp) {
                if (!(x & y)) {
                    return {min(i, j), max(i, j)};
                }
            }
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}