#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minFlips(string s) {
        auto I = [](char ch, int x) -> int {
            return ch - '0' == x;
        };

        int n = s.size();
        vector<vector<int>> pre(n, vector<int>(2));
        for (int i = 0; i < n; ++i) {
            pre[i][0] = (i == 0 ? 0 : pre[i - 1][1]) + I(s[i], 1);
            pre[i][1] = (i == 0 ? 0 : pre[i - 1][0]) + I(s[i], 0);
        }

        int ans = min(pre[n - 1][0], pre[n - 1][1]);
        if (n % 2 == 1) {
            vector<vector<int>> suf(n, vector<int>(2));
            for (int i = n - 1; i >= 0; --i) {
                suf[i][0] = (i == n - 1 ? 0 : suf[i + 1][1]) + I(s[i], 1);
                suf[i][1] = (i == n - 1 ? 0 : suf[i + 1][0]) + I(s[i], 0);
            }
            for (int i = 0; i + 1 < n; ++i) {
                ans = min(ans, pre[i][0] + suf[i + 1][0]);
                ans = min(ans, pre[i][1] + suf[i + 1][1]);
            }
        }

        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().minFlips("001000000010");
    return 0;
}