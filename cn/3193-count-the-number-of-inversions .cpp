#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int numberOfPermutations(int n, vector<vector<int>>& requirements) {
        vector<int>v(n,-1);
        v[0]=0;
        for (auto &i: requirements){
            v[i[0]]=i[1];
        }
        if (v[0])
            return 0;
        int m=ranges::max(v);
        vector<vector<int>>dp(n,vector<int>(m+1));
        dp[0][0]=1;
        for (int i = 1; i < n; ++i) {
            int mx = v[i] < 0 ? m : v[i];
            if (int r = v[i - 1]; r >= 0) {
                for (int j = r; j <= min(i + r, mx); j++) {
                    dp[i][j] = dp[i - 1][r];
                }
            } else {
                for (int j = 0; j <= mx; j++) {
                    for (int k = 0; k <= min(i, j); k++) {
                        dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % N;
                    }
                }
            }
        }
        return dp[n-1][v[n-1]];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}