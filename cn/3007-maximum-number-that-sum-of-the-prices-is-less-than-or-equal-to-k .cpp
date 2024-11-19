#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long findMaximumNumber(long long k, int x) {
        auto check = [&](long long num) {
            long long res = 0;
            int i = x - 1;
            for (long long n = num >> i; n; n >>= x, i += x) {
                res += (n / 2) << i;
                if (n % 2) {
                    long long mask = (1LL << i) - 1;
                    res += (num & mask) + 1;
                }
            }
            return res <= k;
        };

        // 开区间二分，原理见 https://www.bilibili.com/video/BV1AP41137w7/
        long long left = 0, right = (k + 1) << x;
        while (left + 1 < right) {
            long long mid = left + (right - left) / 2;
            (check(mid) ? left : right) = mid;
        }
        return left;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}