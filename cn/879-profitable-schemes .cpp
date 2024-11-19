#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        vector<vector<int>>dp(n+1,vector<int>(minProfit+1));
        dp[0][0]=1;
        int sz=group.size(),ans=0;
        for (int i = 0; i < sz; ++i) {
            for (int j = n; j >= group[i]; --j) {
                for (int k = minProfit; k >= 0; --k) {
                    dp[j][k]=(dp[j][k]+dp[j-group[i]][max(0,k-profit[i])])%N;
                }
            }
        }
        for (int i = 0; i <= n; ++i) {
            ans=(ans+dp[i][minProfit])%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}