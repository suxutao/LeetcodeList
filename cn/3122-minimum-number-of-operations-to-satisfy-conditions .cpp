#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int f0 = 0, f1 = 0, pre = -1;
        for (int i = 0; i < n; i++) {
            int cnt[10]{};
            for (auto& row : grid) {
                cnt[row[i]]++;
            }
            int mx = -1, mx2 = 0, x = -1;
            for (int v = 0; v < 10; v++) {
                int res = (v != pre ? f0 : f1) + cnt[v]; // 保留元素 v
                if (res > mx) { // 更新最优解和次优解
                    mx2 = mx;
                    mx = res;
                    x = v;
                } else if (res > mx2) { // 更新次优解
                    mx2 = res;
                }
            }
            f0 = mx;
            f1 = mx2;
            pre = x;
        }
        return m * n - f0;
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}