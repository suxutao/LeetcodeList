#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int numWays(vector<string>& words, string target) {
        int m=words.size(),n=words[0].size(),nt=target.size();
        vector<array<ll,26>>cnt(n);
        vector<ll>dp(nt+1);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                ++cnt[i][words[j][i]-'a'];
            }
        }
        dp[0]=1;
        for (int i = 1; i <= n; ++i) {
            for (int j = nt; j ; --j) {
                dp[j]=(dp[j]+dp[j-1]*cnt[i-1][target[j-1]-'a']%N)%N;
            }
        }
        return dp[nt];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<string>v{"acca","bbbb","caca"};
    Solution().numWays(v,"aba");
    return 0;
}