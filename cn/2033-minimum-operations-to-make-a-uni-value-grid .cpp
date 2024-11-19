#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m=grid.size(),n=grid[0].size(),ans=INT_MAX;
        if (m*n==1)
            return 0;
        vector<int>v;set<int>s;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                v.push_back(grid[i][j]);
                s.insert(grid[i][j]%x);
            }
        }
        if (s.size()>1)
            return -1;
        sort(v.begin(), v.end());
        vector<int>pre(v.size());
        pre[0]=v[0];
        for (int i = 1; i < v.size(); ++i) {
            pre[i]=pre[i-1]+v[i];
        }
        for (int i = 1; i < v.size(); ++i) {
            ans= min<int>(ans,v[i]*i-pre[i]+pre.back()-pre[i]-v[i]*(v.size()-i-2));
        }
        return ans/x;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{2,4},{6,8}};
    Solution().minOperations(v,2);
    return 0;
}