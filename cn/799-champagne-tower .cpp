#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double dp[105][105]{};
        dp[0][0]=poured;
        for (int i = 0; i <= query_row; ++i) {
            for (int j = 0; j <= i; ++j) {
                if (dp[i][j]>1){
                    double fen=(dp[i][j]-1)/2;
                    dp[i+1][j]+=fen;
                    dp[i+1][j+1]+=fen;
                    dp[i][j]=1;
                }
            }
        }
        return dp[query_row][query_glass];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}