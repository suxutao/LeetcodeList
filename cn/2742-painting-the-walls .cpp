#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int dp[505];
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n=cost.size();
        memset(dp,0x3f,sizeof dp);
        dp[0]=0;
        for (int i = 0; i < n; ++i) {
            for (int j = n; j ; --j) {
                dp[j]= min(dp[j],dp[max(0,j- time[i]-1)]+cost[i]);
            }
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}