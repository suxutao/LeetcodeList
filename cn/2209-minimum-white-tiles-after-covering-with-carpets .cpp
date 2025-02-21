#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumWhiteTiles(string floor, int numCarpets, int carpetLen) {
        int n=floor.size();
        vector<int>pre(n+1);
        vector<vector<int>>dp(n+1,vector<int>(numCarpets+1));
        for (int i = 1; i <= n; ++i) {
            pre[i]=pre[i-1]+floor[i-1]-'0';
        }
        for (int i = 1; i <= n; ++i) {
            dp[i][0]=pre[i];
            for (int j = 1; j <= numCarpets; ++j) {
                dp[i][j]= min(dp[max(i-carpetLen,0)][j-1],dp[i-1][j]+floor[i-1]-'0');
            }
        }
        return ranges::min(dp.back());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().minimumWhiteTiles("11111",2,3);
    return 0;
}