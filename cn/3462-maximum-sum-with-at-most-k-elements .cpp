#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        ll ans=0,m=grid.size();
        priority_queue<int>q;
        for (int i = 0; i < m; ++i) {
            ranges::sort(grid[i],greater<>());
            for (int j = 0; j < limits[i]; ++j) {
                q.emplace(grid[i][j]);
            }
        }
        for (int i = 0; i < k; ++i) {
            ans+=q.top();
            q.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}