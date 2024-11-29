#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size(),ans=INT_MAX,mx=0;
        bitset<4905>dp;
        dp[0]=1;
        for (int i = 0; i < m; ++i) {
            bitset<4905>sw;
            int temp=ranges::max(mat[i]);
            for (int j = 0; j < n; ++j) {
                for (int k = mx+mat[i][j]; k >= mat[i][j]; --k) {
                    sw[k]=sw[k]|dp[k-mat[i][j]];
                }
            }
            dp=move(sw);
            mx+=temp;
        }
        for (int i = 0; i < dp.size(); ++i) {
            if (dp[i])
                ans= min(ans, abs(target-i));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}