#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countSpecialNumbers(int n) {
        string s = to_string(n);
        int m = s.length();
        vector<vector<int>> memo(m, vector<int>(1 << 10, -1)); // -1 表示没有计算过
        function<int(int,int,bool,bool)> dfs = [&](int i, int mask, bool is_limit, bool is_num) -> int {
            if (i == m) {
                return is_num; // is_num 为 true 表示得到了一个合法数字
            }
            if (!is_limit && is_num && memo[i][mask] != -1) {
                return memo[i][mask]; // 之前计算过
            }
            int res = 0;
            if (!is_num) { // 可以跳过当前数位
                res = dfs(i + 1, mask, false, false);
            }
            // 如果前面填的数字都和 n 的一样，那么这一位至多填数字 s[i]（否则就超过 n 啦）
            int up = is_limit ? s[i] - '0' : 9;
            // 枚举要填入的数字 d
            // 如果前面没有填数字，则必须从 1 开始（因为不能有前导零）
            for (int d = is_num ? 0 : 1; d <= up; d++) {
                if ((mask >> d & 1) == 0) { // d 不在 mask 中，说明之前没有填过 d
                    res += dfs(i + 1, mask | (1 << d), is_limit && d == up, true);
                }
            }
            if (!is_limit && is_num) {
                memo[i][mask] = res; // 记忆化
            }
            return res;
        };
        return dfs(0, 0, true, false);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}