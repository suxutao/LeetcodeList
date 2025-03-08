#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long maximumBeauty(vector<int>& flowers, long long newFlowers, int target, int full, int partial) {
        int n = flowers.size();
        long long left_flowers = newFlowers - 1LL * target * n;
        for (int& flower : flowers) {
            flower = min(flower, target);
            left_flowers += flower;
        }
        if (left_flowers == newFlowers) {
            return 1LL * n * full;
        }
        if (left_flowers >= 0) {
            return max(1LL * (target - 1) * partial + 1LL * (n - 1) * full, 1LL * n * full);
        }
        ranges::sort(flowers);
        long long ans = 0, pre_sum = 0;
        int j = 0;
        for (int i = 1; i <= n; i++) {
            left_flowers += target - flowers[i - 1];
            if (left_flowers < 0) {
                continue;
            }
            while (j < i && 1LL * flowers[j] * j <= pre_sum + left_flowers) {
                pre_sum += flowers[j];
                j++;
            }
            long long avg = (left_flowers + pre_sum) / j;
            long long total_beauty = avg * partial + 1LL * (n - i) * full;
            ans = max(ans, total_beauty);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}