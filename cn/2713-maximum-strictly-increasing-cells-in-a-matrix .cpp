#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxIncreasingCells(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        map<int, vector<pair<int, int>>> mp;
        vector<int> row(m), col(n);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mp[mat[i][j]].push_back({i, j});
            }
        }
        vector<int> res;
        for (auto &[_, pos] : mp) {
            res.clear();
            for (auto &[x, y] : pos) {
                res.push_back(max(row[x], col[y]) + 1);
            }
            for (int i = 0; i < pos.size(); i++) {
                auto &[x, y] = pos[i];
                row[x] = max(row[x], res[i]);
                col[y] = max(col[y], res[i]);
            }
        }

        return *max_element(row.begin(), row.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}