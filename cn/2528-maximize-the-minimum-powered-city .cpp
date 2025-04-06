#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long maxPower(vector<int>& stations, int r, int k) {
        int n = stations.size();
        vector<long long> sum(n + 1), power(n), diff(n);
        for (int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + stations[i]; // 前缀和
        }
        for (int i = 0; i < n; i++) {
            power[i] = sum[min(i + r + 1, n)] - sum[max(i - r, 0)]; // 电量
        }

        auto check = [&](long long min_power) -> bool {
            ranges::fill(diff, 0); // 重置差分数组
            long long sum_d = 0, need = 0;
            for (int i = 0; i < n; ++i) {
                sum_d += diff[i]; // 累加差分值
                long long m = min_power - power[i] - sum_d;
                if (m > 0) { // 需要 m 个供电站
                    need += m;
                    if (need > k) {
                        return false; // 提前退出这样快一些
                    }
                    sum_d += m; // 差分更新
                    if (i + r * 2 + 1 < n) {
                        diff[i + r * 2 + 1] -= m; // 差分更新
                    }
                }
            }
            return true;
        };

        long long left = ranges::min(power);
        long long right = left + k + 1; // 开区间写法
        while (left + 1 < right) {
            long long mid = left + (right - left) / 2;
            (check(mid) ? left : right) = mid;
        }
        return left;
    }
};;
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{57,70,35,30,29,13,17,88,89,49};
    Solution().maxPower(v,1,90);
    return 0;
}