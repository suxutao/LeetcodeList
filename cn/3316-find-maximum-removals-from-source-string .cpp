#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxRemovals(string source, string pattern, vector<int>& targetIndices) {
        int n=source.size(),np=pattern.size();
        vector<vector<int>>dp(n+1,vector<int>(np+1,INT_MIN));
        unordered_set<int>s(targetIndices.begin(),targetIndices.end());
        dp[0][0]=0;
        for (int i = 1; i <= n; ++i) {
            int add=s.contains(i-1);
            dp[i][0]=dp[i-1][0]+add;
            for (int j = 1; j <= np; ++j) {
                dp[i][j]= dp[i-1][j]+add;
                if (source[i-1]==pattern[j-1]){
                    dp[i][j]= max(dp[i][j],dp[i-1][j-1]);
                }
            }
        }
        return dp[n][np];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{0,3};
    Solution().maxRemovals("bcda","d",v);
    return 0;
}