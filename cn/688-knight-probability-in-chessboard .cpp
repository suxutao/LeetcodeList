#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[8][2]{{-1,-2},{-1,2},{1,-2},{1,2},{-2,1},{-2,-1},{2,1},{2,-1}};
    double dp[26][26][101]{};
    double knightProbability(int n, int k, int row, int column) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                dp[i][j][0]=1;
            }
        }
        for (int l = 1; l <= k; ++l) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    for (auto [a,b]: arr){
                        a+=i;b+=j;
                        if (a<0||a>=n||b<0||b>=n)
                            continue;
                        dp[i][j][l]+=dp[a][b][l-1]/8;
                    }
                }
            }
        }
        return dp[row][column][k];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}