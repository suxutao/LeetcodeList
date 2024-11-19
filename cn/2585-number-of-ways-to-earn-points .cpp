#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int waysToReachTarget(int target, vector<vector<int>>& types) {
        vector<int>dp(target+1);
        dp[0]=1;
        for (int i = 0; i < types.size(); ++i) {
            for (int j = target; j; --j) {
                for (int k=1;k<=min(types[i][0],j/types[i][1]);++k) {
                    dp[j]=(dp[j]+dp[j-k*types[i][1]])%N;
                }
            }
        }
        return dp[target];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}