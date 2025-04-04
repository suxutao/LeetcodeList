#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int medianOfUniquenessArray(vector<int>& nums) {
        int n = nums.size();
        long long median = ((long long) n * (n + 1) / 2 + 1) / 2;

        /* 检测数组中不同元素数目小于等于 t 的连续子数组数目是否大于等于 median */
        auto check = [&](int t) -> bool {
            unordered_map<int, int> cnt;
            long long tot = 0;
            for (int i = 0, j = 0; i < n; i++) {
                cnt[nums[i]]++;
                while (cnt.size() > t) {
                    cnt[nums[j]]--;
                    if (cnt[nums[j]] == 0) {
                        cnt.erase(nums[j]);
                    }
                    j++;
                }
                tot += i - j + 1;
            }
            return tot >= median;
        };

        int res = 0;
        int lo = 1, hi = n;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (check(mid)) {
                res = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}