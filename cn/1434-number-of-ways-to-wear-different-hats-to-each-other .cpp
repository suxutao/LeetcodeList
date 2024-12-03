#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int numberWays(vector<vector<int>>& hats) {
        int n=hats.size(),mx=0;
        unordered_map<int,vector<int>>m;
        for (int i = 0; i < n; ++i) {
            mx=max(mx,ranges::max(hats[i]));
        }
        vector<vector<int>>dp(mx+1,vector<int>(1<<n));
        dp[0][0]=1;
        for (int i = 0; i < n; ++i) {
            for (auto &j: hats[i]){
                m[j].push_back(i);
            }
        }
        for (int i = 1; i <= mx; ++i) {
            for (int j = 0; j < 1 << n; ++j) {
                dp[i][j]=dp[i-1][j];
                for (auto &k: m[i]){
                    if (j>>k&1){
                        dp[i][j]=(dp[i][j]+dp[i-1][j^(1<<k)])%N;
                    }
                }
            }
        }
        return dp[mx].back();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}