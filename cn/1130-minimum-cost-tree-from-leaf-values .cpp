#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX)),MAX(n,vector<int>(n));
        for (int i = 0; i < n; ++i) {
            dp[i][i]=0;
            MAX[i][i]=arr[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                MAX[i][j]= max(MAX[i][j-1],arr[j]);
            }
        }
        for (int i = 0; i < n - 1; ++i) {
            dp[i][i+1]=arr[i]*arr[i+1];
        }
        for (int l = 3; l <= n; ++l) {
            for (int i = 0; i <= n-l; ++i) {
                int j=i+l-1;
                for (int k = i; k < j; ++k) {
                    dp[i][j]= min(dp[i][j],dp[i][k]+dp[k+1][j]+MAX[i][k]*MAX[k+1][j]);
                }
            }
        }
        return dp[0][n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{6,2,4};
    Solution().mctFromLeafValues(v);
    return 0;
}