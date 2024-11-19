#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxScore(int n, int k, vector<vector<int>>& stayScore, vector<vector<int>>& travelScore) {
        vector<vector<int>>dp(k,vector<int>(n));
        for (int i = 0; i < n; ++i) {
            dp[0][i]=stayScore[0][i];
            for (int j = 0; j < n; ++j) {
                dp[0][i]= max(dp[0][i],travelScore[j][i]);
            }
        }
        for (int i = 1; i < k; ++i) {
            for (int j = 0; j < n; ++j) {
                dp[i][j]=stayScore[i][j]+dp[i-1][j];
                for (int l = 0; l < n; ++l) {
                    dp[i][j]= max(dp[i][j],travelScore[l][j]+dp[i-1][l]);
                }
            }
        }
        return ranges::max(dp[k-1]);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}