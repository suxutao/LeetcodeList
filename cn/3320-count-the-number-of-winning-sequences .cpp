#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int score(char c,int choice){
        if (c=='F'){
            if (choice==0){
                return 1;
            }else if (choice==1){
                return 2;
            }else{
                return 0;
            }
        }else if (c=='W'){
            if (choice==0){
                return 0;
            }else if (choice==1){
                return 1;
            }else{
                return 2;
            }
        }else{
            if (choice==0){
                return 2;
            }else if (choice==1){
                return 0;
            }else{
                return 1;
            }
        }
    }
    int countWinningSequences(string s) {
        ll n=s.size(),dp[1002][2004][3]{},ans=0;
        dp[0][score(s[0],0)][0]=1;
        dp[0][score(s[0],1)][1]=1;
        dp[0][score(s[0],2)][2]=1;
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j <= (i+1)*2; ++j) {
                if (j>=score(s[i],0))
                    dp[i][j][0]=(dp[i-1][j-score(s[i],0)][1]+dp[i-1][j-score(s[i],0)][2])%N;
                if (j>=score(s[i],1))
                    dp[i][j][1]=(dp[i-1][j-score(s[i],1)][0]+dp[i-1][j-score(s[i],1)][2])%N;
                if (j>=score(s[i],2))
                    dp[i][j][2]=(dp[i-1][j-score(s[i],2)][0]+dp[i-1][j-score(s[i],2)][1])%N;
            }
        }
        for (int i = n+1; i <= n * 2; ++i) {
            for (int j = 0; j < 3; ++j) {
                ans=(ans+dp[n-1][i][j])%N;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().countWinningSequences("FFF");
    return 0;
}