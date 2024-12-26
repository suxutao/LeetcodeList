#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n=stones.size(),pre[n+1];
        vector<int>dp(n);
        pre[0]=0;
        for (int i = 0; i < n; ++i) {
            pre[i+1]=pre[i]+stones[i];
        }
        dp[n-1]=pre[n];
        for (int i = n-2; i ; --i) {
            dp[i]= max(dp[i+1],pre[i+1]-dp[i+1]);
        }
        return dp[1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}