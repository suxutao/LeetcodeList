#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        int n=obstacles.size();
        vector<int>dp{1,0,1};
        for (int i = 1; i < n; ++i) {
            int MIN=INT_MAX;
            for (int j = 0; j < 3; ++j) {
                if (j==obstacles[i]-1){
                    dp[j]=INT_MAX;
                }else{
                    MIN= min(MIN,dp[j]);
                }
            }
            for (int j = 0; j < 3; ++j) {
                if (j==obstacles[i]-1)
                    continue;
                dp[j]= min(dp[j],MIN+1);
            }
        }
        return min(dp[0], min(dp[1],dp[2]));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}