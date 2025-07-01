#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minXor(vector<int>& nums, int k) {
        int n = nums.size();
        vector f(k + 1, vector<int>(n + 1, INT_MAX));
        f[0][0] = 0;
        for (int i = 1; i <= k; i++) {
            for (int j = i; j <= n - (k - i); j++) {
                int s = 0;
                for (int l = j - 1; l >= i - 1; l--) {
                    s ^= nums[l];
                    f[i][j] = min(f[i][j], max(f[i - 1][l], s));
                }
            }
        }
        return f[k][n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{1,2,3};
    Solution().minXor(v,2);
    return 0;
}