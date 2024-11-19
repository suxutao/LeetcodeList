#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n=jobDifficulty.size();
        vector<vector<int>>dp(n+1,vector<int>(d+1,INT_MAX)),mn(n,vector<int>(n));
        for (int i = 0; i < n; ++i) {
            mn[i][i]=jobDifficulty[i];
            if (i) mn[i-1][i]= max(jobDifficulty[i],jobDifficulty[i-1]);
        }
        for (int l = 3; l <= n; ++l) {
            for (int i = 0; i <= n - l; ++i) {
                int j=i+l-1;
                mn[i][j]= max(max(jobDifficulty[i],jobDifficulty[j]),mn[i+1][j-1]);
            }
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= min(i,d); ++j) {
                if (j==1){
                    dp[i][j]=mn[0][i-1];
                }else{
                    for (int k = j-1; k < i; ++k) {
                        dp[i][j]= min(dp[i][j],dp[k][j-1]+mn[k][i-1]);
                    }
                }
            }
        }
        return dp[n][d]==INT_MAX?-1:dp[n][d];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}