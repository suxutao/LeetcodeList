#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0;
        vector<int>v(grid.size());
        priority_queue<int>q[grid.size()];
        for (int i = 0; i < grid.size(); ++i) {
            q[i]= priority_queue<int>(grid[i].begin(),grid[i].end());
        }
        for (int i = 0; i < grid[0].size(); ++i) {
            for (int j = 0; j < grid.size(); ++j) {
                v[j]=q[j].top();
                q[j].pop();
            }
            ans+= *max_element(v.begin(), v.end());
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}