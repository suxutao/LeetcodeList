#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> pos0 = {-1}; // 加个 -1 哨兵，方便处理 cnt0 达到最大时的计数
        int total1 = 0; // [0,r] 中的 1 的个数
        int ans = 0;
        for (int r = 0; r < s.size(); r++) {
            if (s[r] == '0') {
                pos0.push_back(r); // 记录 0 的下标
            } else {
                total1++;
                ans += r - pos0.back(); // 单独计算不含 0 的子串个数
            }

            int m = pos0.size();
            // 倒着遍历 pos0，那么 cnt0 = m - i
            for (int i = m - 1; i > 0 && (m - i) * (m - i) <= total1; i--) {
                int p = pos0[i - 1], q = pos0[i];
                int cnt0 = m - i;
                int cnt1 = r - q + 1 - cnt0; // [q,r] 中的 1 的个数 = [q,r] 的长度 - cnt0
                ans += max(q - max(cnt0 * cnt0 - cnt1, 0) - p, 0);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}