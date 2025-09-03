#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
const int MX = 100'001;
vector<int> divisors[MX];

int init = [] {
    // 预处理每个数的因子
    for (int i = 1; i < MX; i++) {
        for (int j = i; j < MX; j += i) { // 枚举 i 的倍数 j
            divisors[j].push_back(i); // i 是 j 的因子
        }
    }
    return 0;
}();

class Solution {
public:
    vector<int> minDifference(int n, int k) {
        int min_diff = INT_MAX;
        vector<int> path(k), ans;

        auto dfs = [&](this auto&& dfs, int i, int n, int mn, int mx) -> void {
            if (i == k - 1) {
                int d = max(mx, n) - min(mn, n); // 最后一个数是 n
                if (d < min_diff) {
                    min_diff = d;
                    path[i] = n;
                    ans = path;
                }
                return;
            }
            for (int d : divisors[n]) { // 枚举 n 的因子 d
                path[i] = d; // 直接覆盖，无需恢复现场
                dfs(i + 1, n / d, min(mn, d), max(mx, d));
            }
        };

        dfs(0, n, INT_MAX, 0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}