#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        vector<vector<int>>dp(n,vector<int>(n));
        for (int l = 3; l <= n; ++l) {
            for (int i = 0; i <= n-l; ++i) {
                int j=i+l-1;
                dp[i][j]=INT_MAX;
                for (int k = i+1; k < j; ++k) {
                    dp[i][j]= min(dp[i][j],dp[i][k]+dp[k][j]+values[i]*values[j]*values[k]);
                }
            }
        }
        return dp[0][n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}