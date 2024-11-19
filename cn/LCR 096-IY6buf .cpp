#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if (s3.size()!=s1.size()+s2.size())
            return false;
        int n1=s1.size(),n2=s2.size();
        vector<vector<bool>>dp(n1+1,vector<bool>(n2+1));
        dp[0][0]=1;
        for (int i = 1; i <= n1; ++i) {
            if (s1[i-1]==s3[i-1]){
                dp[i][0]=1;
            }else{
                break;
            }
        }
        for (int i = 1; i <= n2; ++i) {
            if (s2[i-1]==s3[i-1]){
                dp[0][i]=1;
            }else{
                break;
            }
        }
        for (int i = 1; i <= n1; ++i) {
            for (int j = 1; j <= n2; ++j) {
                int k=i+j-1;
                if (s3[k]==s1[i-1]&&s3[k]==s2[j-1]){
                    dp[i][j]=dp[i-1][j]||dp[i][j-1];
                }else if (s3[k]==s1[i-1]||s3[k]==s2[j-1]){
                    if (s3[k]==s1[i-1]){
                        dp[i][j]=dp[i-1][j];
                    }else{
                        dp[i][j]=dp[i][j-1];
                    }
                }
            }
        }
        return dp[n1][n2];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}