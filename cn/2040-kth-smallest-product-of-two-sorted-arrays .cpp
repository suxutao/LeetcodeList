#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long kthSmallestProduct(vector<int>& a, vector<int>& b, long long k) {
        int n = a.size(), m = b.size();
        int i0 = ranges::lower_bound(a, 0) - a.begin(); // 四个区域的水平分界线
        int j0 = ranges::lower_bound(b, 0) - b.begin(); // 四个区域的垂直分界线

        auto check = [&](long long mx) -> bool {
            long long cnt = 0;

            if (mx < 0) {
                // 右上区域
                int i = 0, j = j0;
                while (i < i0 && j < m) { // 注：可以加个 cnt < k 的判断，提前退出
                    if (1LL * a[i] * b[j] > mx) {
                        j++;
                    } else {
                        cnt += m - j;
                        i++;
                    }
                }

                // 左下区域
                i = i0;
                j = 0;
                while (i < n && j < j0) {
                    if (1LL * a[i] * b[j] > mx) {
                        i++;
                    } else {
                        cnt += n - i;
                        j++;
                    }
                }
            } else {
                // 右上区域和左下区域的所有数都 <= 0 <= mx
                cnt = 1LL * i0 * (m - j0) + 1LL * (n - i0) * j0;

                // 左上区域
                int i = 0, j = j0 - 1;
                while (i < i0 && j >= 0) {
                    if (1LL * a[i] * b[j] > mx) {
                        i++;
                    } else {
                        cnt += i0 - i;
                        j--;
                    }
                }

                // 右下区域
                i = i0;
                j = m - 1;
                while (i < n && j >= j0) {
                    if (1LL * a[i] * b[j] > mx) {
                        j--;
                    } else {
                        cnt += j - j0 + 1;
                        i++;
                    }
                }
            }

            return cnt >= k;
        };

        long long corners[4] = {1LL * a[0] * b[0], 1LL * a[0] * b[m - 1], 1LL * a[n - 1] * b[0], 1LL * a[n - 1] * b[m - 1]};
        auto [left, right] = ranges::minmax(corners);
        left--;
        while (left + 1 < right) {
            long long mid = left + (right - left) / 2;
            (check(mid) ? right : left) = mid;
        }
        return right;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}