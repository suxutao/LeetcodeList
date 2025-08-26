#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxWalls(vector<int>& robots, vector<int>& distance, vector<int>& walls) {
        int n = robots.size();
        struct Pair { int x, d; };
        vector<Pair> a(n + 2);
        for (int i = 0; i < n; i++) {
            a[i] = {robots[i], distance[i]};
        }
        a[n + 1].x = INT_MAX;
        ranges::sort(a, {}, &Pair::x);
        ranges::sort(walls);

        vector<array<int, 2>> f(n + 1);
        for (int i = 1; i <= n; i++) {
            auto [x, d] = a[i];

            // 往左射，墙的坐标范围为 [left_x, x]
            int left_x = max(x - d, a[i - 1].x + 1); // +1 表示不能射到左边那个机器人
            int left = ranges::lower_bound(walls, left_x) - walls.begin();
            int cur = ranges::upper_bound(walls, x) - walls.begin();
            int left_res = f[i - 1][0] + cur - left; // 下标在 [left, cur-1] 中的墙都能摧毁

            cur = ranges::lower_bound(walls, x) - walls.begin();
            for (int j = 0; j < 2; j++) {
                // 往右射，墙的坐标范围为 [x, right_x]
                auto [x2, d2] = a[i + 1];
                if (j == 0) { // 右边那个机器人往左射
                    x2 -= d2;
                }
                int right_x = min(x + d, x2 - 1); // -1 表示不能射到右边那个机器人（或者它往左射到的墙）
                int right = ranges::upper_bound(walls, right_x) - walls.begin();
                f[i][j] = max(left_res, f[i - 1][1] + right - cur); // 下标在 [cur, right-1] 中的墙都能摧毁
            }
        }
        return f[n][1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}