#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>dp;
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),ans=0;
        dp.assign(m+1,vector<int>(n+1));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (matrix[i-1][j-1]){
                    dp[i][j]= min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]})+1;
                    ans+=dp[i][j];
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}