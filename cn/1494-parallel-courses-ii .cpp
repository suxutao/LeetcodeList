#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minNumberOfSemesters(int n, vector<vector<int>>& relations, int k) {
        int u=(1<<n)-1;
        vector<int>pre(n),dp(1<<n);
        for (auto &i: relations){
            pre[i[1]-1]|=1<<(i[0]-1);
        }
        for (int i = 1; i < 1 << n; ++i) {
            int i1=0,ci=u^i;
            for (int j = 0; j < n; ++j) {
                if (i>>j&1&&(pre[j]|ci)==ci){
                    i1|=1<<j;
                }
            }
            if (__builtin_popcount(i1)<=k){
                dp[i]=dp[i^i1]+1;
                continue;
            }
            dp[i]=INT_MAX;
            for (int j = i1; j; j=(j-1)&i1) {
                if (__builtin_popcount(j)==k)
                    dp[i]= min(dp[i],dp[i^j]+1);
            }
        }
        return dp[u];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}