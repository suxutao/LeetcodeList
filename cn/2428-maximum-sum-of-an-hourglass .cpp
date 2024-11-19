#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    typedef long long ll;
    int maxSum(vector<vector<int>>& grid) {
        ll m=grid.size(),n=grid[0].size(),ans=0;
        vector<vector<ll>>v(m+1,vector<ll>(n+1));
        for (int i = 1; i < v.size(); ++i) {
            for (int j = 1; j < v[0].size(); ++j) {
                v[i][j]=grid[i-1][j-1]+v[i-1][j]+v[i][j-1]-v[i-1][j-1];
            }
        }
        for (int i = 3; i < v.size(); ++i) {
            for (int j = 3; j < v[0].size(); ++j) {
                ans= max(ans,v[i][j]-v[i-3][j]-v[i][j-3]+v[i-3][j-3]-grid[i-2][j-1]-grid[i-2][j-3]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}