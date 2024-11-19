#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int crackNumber(int ciphertext) {
        string s=to_string(ciphertext);
        int n=s.size();
        vector<int>dp(n+1);
        dp[0]=1;dp[1]=1;
        for (int i = 2; i <= n; ++i) {
            if (s[i-2]=='2'){
                if (s[i-1]>'5')
                    dp[i]=dp[i-1];
                else
                    dp[i]=dp[i-1]+dp[i-2];
            }else if (s[i-2]=='1'){
                dp[i]=dp[i-1]+dp[i-2];
            }else{
                dp[i]=dp[i-1];
            }
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}