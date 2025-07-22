#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n = online.size();
        vector<vector<pair<int, int>>> g(n);
        int max_wt = -1;
        for (auto& e : edges) {
            int x = e[0], y = e[1], wt = e[2];
            if (online[x] && online[y]) {
                g[x].emplace_back(y, wt);
                if (x == 0) {
                    max_wt = max(max_wt, wt);
                }
            }
        }

        vector<long long> memo(n);
        auto check = [&](int lower) -> bool {
            ranges::fill(memo, -1); // -1 表示没有计算过

            auto dfs = [&](this auto&& dfs, int x) -> long long {
                if (x == n - 1) { // 到达终点
                    return 0;
                }
                auto& res = memo[x]; // 注意这里是引用
                if (res != -1) { // 之前计算过
                    return memo[x];
                }
                res = LLONG_MAX / 2; // 防止加法溢出
                for (auto& [y, wt] : g[x]) {
                    if (wt >= lower) {
                        res = min(res, dfs(y) + wt);
                    }
                }
                return res;
            };

            return dfs(0) <= k;
        };

        int l=0,r=max_wt+1;
        while (l<r){
            int mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}