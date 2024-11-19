#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
        vector<int> ans(queries.size(), -1);
        vector<vector<pair<int, int>>> qs(heights.size());
        for (int i = 0; i < queries.size(); i++) {
            int a = queries[i][0], b = queries[i][1];
            if (a > b) {
                swap(a, b); // 保证 a <= b
            }
            if (a == b || heights[a] < heights[b]) {
                ans[i] = b; // a 直接跳到 b
            } else {
                qs[b].emplace_back(heights[a], i); // 离线询问
            }
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        for (int i = 0; i < heights.size(); i++) {
            while (!pq.empty() && pq.top().first < heights[i]) {
                // 堆顶的 heights[a] 可以跳到 heights[i]
                ans[pq.top().second] = i;
                pq.pop();
            }
            for (auto& p : qs[i]) {
                pq.emplace(p); // 后面再回答
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}