#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long maxSubarrays(int n, vector<vector<int>>& conflictingPairs) {
        vector<vector<int>> groups(n + 1);
        for (auto& p : conflictingPairs) {
            int a = p[0], b = p[1];
            if (a > b) {
                swap(a, b);
            }
            groups[a].push_back(b);
        }

        long long ans = 0;
        vector<long long> extra(n + 2);
        vector<int> b = {n + 1, n + 1};

        for (int i = n; i > 0; i--) {
            // 维护最小 b 和次小 b
            b.insert(b.end(), groups[i].begin(), groups[i].end());
            ranges::sort(b);
            b.resize(2);

            ans += b[0] - i;
            extra[b[0]] += b[1] - b[0];
        }

        return ans + ranges::max(extra);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}