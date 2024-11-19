#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int securityCheck(vector<int>& capacities, int k) {
        int n=capacities.size(),N=1e9+7;
        for (int i = 0; i < n; ++i) {
            capacities[i]--;
        }
        vector<int>dp(k+1);
        dp[0]=1;
        for (int i = 0; i < n; ++i) {
            for (int j = k; j >= capacities[i]; --j) {
                dp[j]=(dp[j]+dp[j-capacities[i]])%N;
            }
        }
        return dp[k];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}