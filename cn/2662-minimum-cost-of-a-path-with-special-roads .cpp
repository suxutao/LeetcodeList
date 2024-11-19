#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int minimumCost(vector<int> &start, vector<int> &target, vector <vector<int>> &specialRoads) {
        ll t = (ll) target[0] << 32 | target[1];
        unordered_map<ll, int> dis = {{(ll) start[0] << 32 | start[1], 0}, {t, INT_MAX}};
        unordered_set<ll> vis;
        while (1) {
            ll v = -1;
            int dv = -1;
            for (auto &[p, d]: dis)
                if (!vis.count(p) && (dv < 0 || d < dv))
                    v = p, dv = d;
            if (v == t) return dv; // 到终点的最短路已确定
            vis.insert(v);
            int vx = v >> 32, vy = v & UINT32_MAX;
            // 更新到终点的最短路
            dis[t] = min(dis[t], dv + target[0] - vx + target[1] - vy);
            for (auto &r: specialRoads) {
                int d = dv + abs(r[0] - vx) + abs(r[1] - vy) + r[4];
                ll w = (ll) r[2] << 32 | r[3];
                if (!dis.count(w) || d < dis[w])
                    dis[w] = d;
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}