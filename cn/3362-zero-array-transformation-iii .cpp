#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        ranges::sort(queries, {}, [](auto& q) { return q[0]; }); // 按照左端点从小到大排序
        int n = nums.size(), j = 0, sum_d = 0;
        vector<int> diff(n + 1, 0);
        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            sum_d += diff[i];
            // 维护左端点 <= i 的区间
            while (j < queries.size() && queries[j][0] <= i) {
                pq.push(queries[j][1]);
                j++;
            }
            // 选择右端点最大的区间
            while (sum_d < nums[i] && !pq.empty() && pq.top() >= i) {
                sum_d++;
                diff[pq.top() + 1]--;
                pq.pop();
            }
            if (sum_d < nums[i]) {
                return -1;
            }
        }
        return pq.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}