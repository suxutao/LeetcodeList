#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    // 把矩阵 a 顺时针旋转 90°
    vector<vector<int>> rotate(const vector<vector<int>>& a) {
        int m = a.size(), n = a[0].size();
        vector b(n, vector<int>(m));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                b[j][m - 1 - i] = a[i][j];
            }
        }
        return b;
    }

    // 3195. 包含所有 1 的最小矩形面积 I
    // 限定在 a 的 [u,d) 行，[l,r) 列中
    int minimumArea(const vector<vector<int>>& a, int u, int d, int l, int r) {
        int left = r, right = 0;
        int top = d, bottom = 0;
        for (int i = u; i < d; i++) {
            for (int j = l; j < r; j++) {
                if (a[i][j] == 1) {
                    left = min(left, j);
                    right = max(right, j);
                    top = min(top, i);
                    bottom = i;
                }
            }
        }
        return (right - left + 1) * (bottom - top + 1);
    }

    int solve(const vector<vector<int>>& a) {
        int m = a.size(), n = a[0].size();
        int ans = INT_MAX;

        if (m >= 3) {
            for (int i = 1; i < m; i++) {
                for (int j = i + 1; j < m; j++) {
                    // 图片上左
                    int area = minimumArea(a, 0, i, 0, n);
                    area += minimumArea(a, i, j, 0, n);
                    area += minimumArea(a, j, m, 0, n);
                    ans = min(ans, area);
                }
            }
        }

        if (m >= 2 && n >= 2) {
            for (int i = 1; i < m; i++) {
                for (int j = 1; j < n; j++) {
                    // 图片上中
                    int area = minimumArea(a, 0, i, 0, n);
                    area += minimumArea(a, i, m, 0, j);
                    area += minimumArea(a, i, m, j, n);
                    ans = min(ans, area);

                    // 图片上右
                    area = minimumArea(a, 0, i, 0, j);
                    area += minimumArea(a, 0, i, j, n);
                    area += minimumArea(a, i, m, 0, n);
                    ans = min(ans, area);
                }
            }
        }

        return ans;
    }

public:
    int minimumSum(vector<vector<int>>& grid) {
        return min(solve(grid), solve(rotate(grid)));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}