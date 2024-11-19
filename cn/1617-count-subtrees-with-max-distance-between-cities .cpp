#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> countSubgraphsForEachDiameter(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto &edge : edges) {
            int x = edge[0] - 1;
            int y = edge[1] - 1;
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }
        function<int(int, int&, int&)> dfs = [&](int root, int& mask, int& diameter)->int {
            int first = 0, second = 0;
            mask &= ~(1 << root);
            for (int vertex : adj[root]) {
                if (mask & (1 << vertex)) {
                    mask &= ~(1 << vertex);
                    int distance = 1 + dfs(vertex, mask, diameter);
                    if (distance > first) {
                        second = first;
                        first = distance;
                    } else if (distance > second) {
                        second = distance;
                    }
                }
            }
            diameter = max(diameter, first + second);
            return first;
        };

        vector<int> ans(n - 1);
        for (int i = 1; i < (1 << n); i++) {
            int root = 32 - __builtin_clz(i) - 1;
            int mask = i;
            int diameter = 0;
            dfs(root, mask, diameter);
            if (mask == 0 && diameter > 0) {
                ans[diameter - 1]++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}