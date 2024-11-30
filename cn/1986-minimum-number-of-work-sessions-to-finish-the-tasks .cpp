#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSessions(vector<int>& tasks, int sessionTime) {
        int n=tasks.size(),u=(1<<n)-1;
        vector<int>dp(1<<n),sum(1<<n);
        for (int i = 0; i < n; ++i) {
            dp[1<<i]=1;
        }
        for (int i = 1; i < 1 << n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i>>j&1)
                    sum[i]+=tasks[j];
            }
        }
        for (int i = 1; i < 1 << n; ++i) {
            if (sum[i]<=sessionTime){
                dp[i]=1;
            }else{
                dp[i]=INT_MAX;
                for (int j = i; j ; j=(j-1)&i) {
                    if (sum[j]<=sessionTime)
                        dp[i]= min(dp[i],dp[i^j]+1);
                }
            }
        }
        return dp[u];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}