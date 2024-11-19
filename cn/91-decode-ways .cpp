#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numDecodings(string s) {
        if (s[0]=='0')
            return 0;
        int n=s.size();
        vector<int>dp(n+1);
        dp[0]=dp[1]=1;
        for (int i = 2; i <= n; ++i) {
            if (s[i-1]=='0'){
                if (s[i-2]>'2'||s[i-2]=='0')
                    return 0;
                else
                    dp[i]=dp[i-2];
            }else{
                if (s[i-2]>'2'||s[i-1]>'6'&&s[i-2]=='2'||s[i-2]=='0'){
                    dp[i]=dp[i-1];
                }else{
                    dp[i]=dp[i-1]+dp[i-2];
                }
            }
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().numDecodings("2611055971756562");
    return 0;
}