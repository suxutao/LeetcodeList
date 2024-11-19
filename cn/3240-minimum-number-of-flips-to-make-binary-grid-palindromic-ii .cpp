#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minFlips(vector<vector<int>>& a) {
        int m = a.size(), n = a[0].size();
        int ans = 0;
        for (int i = 0; i < m / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                int cnt1 = a[i][j] + a[i][n - 1 - j] + a[m - 1 - i][j] + a[m - 1 - i][n - 1 - j];
                ans += min(cnt1, 4 - cnt1); // 全为 1 或全为 0
            }
        }

        if (m % 2 && n % 2) {
            // 正中间的数必须是 0
            ans += a[m / 2][n / 2];
        }

        int diff = 0, cnt1 = 0;
        if (m % 2) {
            // 统计正中间这一排
            for (int j = 0; j < n / 2; j++) {
                if (a[m / 2][j] != a[m / 2][n - 1 - j]) {
                    diff++;
                } else {
                    cnt1 += a[m / 2][j] * 2;
                }
            }
        }
        if (n % 2) {
            // 统计正中间这一列
            for (int i = 0; i < m / 2; i++) {
                if (a[i][n / 2] != a[m - 1 - i][n / 2]) {
                    diff++;
                } else {
                    cnt1 += a[i][n / 2] * 2;
                }
            }
        }

        return ans + (diff ? diff : cnt1 % 4);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}