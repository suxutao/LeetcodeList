#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int deleteString(string s) {
        int n=s.size();
        vector<int>dp(n,1);
        vector<vector<int>>pre(n+1,vector<int>(n+1));
        for (int i = n - 1; i >= 0; --i)
            for (int j = n - 1; j > i; --j)
                if (s[i] == s[j])
                    pre[i][j] = pre[i + 1][j + 1] + 1;
        for (int i = n-2; i >= 0; --i) {
            for (int j = i+1; j < n; ++j) {
                if (pre[i][j]>=j-i){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        return dp[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}