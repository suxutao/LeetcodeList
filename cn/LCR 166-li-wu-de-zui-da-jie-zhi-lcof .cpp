#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>dp;
    int jewelleryValue(vector<vector<int>>& frame) {
        int m=frame.size(),n=frame[0].size();
        dp.assign(m,vector<int>(n));
        dp[0][0]=frame[0][0];
        for (int i = 1; i < m; ++i) {
            dp[i][0]=frame[i][0]+dp[i-1][0];
        }
        for (int i = 1; i < n; ++i) {
            dp[0][i]=frame[0][i]+dp[0][i-1];
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[i][j]= max(dp[i-1][j],dp[i][j-1])+frame[i][j];
            }
        }
        return dp[m-1][n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}