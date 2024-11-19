#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    const int MOD = 1e9 + 7;
public:
    int dieSimulator(int n, vector<int> &rollMax) {
        int m = rollMax.size(), f[n][m], s[n];
        for (int j = 0; j < m; ++j) f[0][j] = 1;
        s[0] = m;
        for (int i = 1; i < n; ++i) {
            s[i] = 0;
            for (int j = 0; j < m; ++j) {
                int res = s[i - 1], mx = rollMax[j];
                if (i > mx) res -= s[i - mx - 1] - f[i - mx - 1][j];
                else if (i == mx) --res;
                f[i][j] = (res % MOD + MOD) % MOD; // 防止出现负数
                s[i] = (s[i] + f[i][j]) % MOD;
            }
        }
        return s[n - 1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}