#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int waysToReachStair(int k) {
        unordered_map<long long, int> memo;
        auto dfs = [&](auto&& dfs, int i, int j, bool pre_down) -> int {
            if (i > k + 1) { // 无法到达终点 k
                return 0;
            }
            // 把状态 (i, j, pre_down) 压缩成一个 long long
            long long mask = (long long) i << 32 | j << 1 | pre_down;
            if (memo.contains(mask)) { // 之前算过了
                return memo[mask];
            }
            int res = i == k;
            res += dfs(dfs, i + (1 << j), j + 1, false); // 操作二
            if (i && !pre_down) {
                res += dfs(dfs, i - 1, j, true); // 操作一
            }
            return memo[mask] = res; // 记忆化
        };
        return dfs(dfs, 1, 0, false);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}