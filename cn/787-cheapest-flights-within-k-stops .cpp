#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> f(n, INT_MAX/2);
        f[src] = 0;
        int ans = INT_MAX/2;
        for (int t = 1; t <= k + 1; ++t) {
            vector<int> g(n, INT_MAX/2);
            for (auto&& flight: flights) {
                int j = flight[0], i = flight[1], cost = flight[2];
                g[i] = min(g[i], f[j] + cost);
            }
            f = g;
            ans = min(ans, f[dst]);
        }
        return (ans == INT_MAX/2 ? -1 : ans);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}