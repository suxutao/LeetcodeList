#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxValue(vector<vector<int>> &events, int k) {
        sort(events.begin(), events.end(), [](vector<int>& a,vector<int>&b) {
            return a[1] < b[1];
        });
        int n = events.size(), f[n+1][k+1];
        memset(f, 0, sizeof(f));
        for (int i = 0; i < n; ++i) {
            int p = lower_bound(events.begin(), events.begin() + i, events[i][0],[](auto &e, int lower) {
                return e[1] < lower;
            })-events.begin();
            for (int j = 1; j <= k; ++j)
                f[i + 1][j] = max(f[i][j], f[p][j - 1] + events[i][2]);
        }
        return f[n][k];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}