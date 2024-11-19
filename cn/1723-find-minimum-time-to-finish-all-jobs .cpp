#include "../../../stdc.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumTimeRequired(vector<int> &jobs, int k) {
        vector<int> sum(1 << jobs.size());
        for (int i = 0; i < jobs.size(); ++i) {
            for (int j = 0; j < 1 << i; ++j) {
                sum[(1<<i) | j] = sum[j] + jobs[i];
            }
        }
        vector<int> v(sum);
        for (int i = 1; i < k; ++i) {
            for (int j = (1 << jobs.size())-1; j; --j) {
                for (int m = j; m; m = (m - 1) & j) {
                    v[j]= min(v[j], max(sum[m],v[j^m]));
                }
            }
        }
        return v.back();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {

    return 0;
}