#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int stoneGameV(vector<int>& stoneValue) {
        int n=stoneValue.size();
        int pre[505]{},dp[505][505]{};
        for (int i = 0; i < n; ++i) {
            pre[i+1]=pre[i]+stoneValue[i];
        }
        for (int i = 0; i < n - 1; ++i) {
            dp[i][i+1]= min(stoneValue[i],stoneValue[i+1]);
        }
        for (int l = 3; l <= n; ++l) {
            for (int i = 0; i <= n - l; ++i) {
                int j=i+l-1;
                for (int k = i; k < j; ++k) {
                    int left=pre[k+1]-pre[i],right=pre[j+1]-pre[k+1];
                    if (left<right){
                        dp[i][j]= max(dp[i][j],dp[i][k]+left);
                    }else if (left==right){
                        dp[i][j]= max(dp[i][j],max(dp[k+1][j]+right, dp[i][k]+left));
                    }else{
                        dp[i][j]= max(dp[i][j],dp[k+1][j]+right);
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