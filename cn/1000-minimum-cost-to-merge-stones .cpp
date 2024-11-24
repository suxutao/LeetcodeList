#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int mergeStones(vector<int>& stones, int k) {
        int n=stones.size(),t=n;
        while (t>=k){
            t=t-k+1;
        }
        if (t!=1) return -1;
        vector<int>pre(n+1);
        vector<vector<int>>dp(n,vector<int>(n));
        for (int i = 0; i < n; ++i) {
            pre[i+1]=pre[i]+stones[i];
        }
        for (int l = k; l <= n; l+=k) {
            for (int i = 0; i <= n - l; ++i) {
                int j=i+l-1;
                if (l==k){
                    dp[i][j]=pre[j+1]-pre[i];
                }else{
                    dp[i][j]=INT_MAX;
                    for (int m = i+k; m < j; m+=k) {
                        dp[i][j]= min(dp[i][j],dp[i][m]+dp[m+1][j]+pre[j+1]-pre[i]);
                    }
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