#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<int> pathsWithMaxScore(vector<string>& board) {
        int n=board.size(),N=1e9+7;board[n-1][n-1]='0';
        vector<vector<ll>>dp(n,vector<ll>(n));
        vector<vector<ll>>v(n,vector<ll>(n));
        v[0][0]=1;dp[0][0]=1;
        for (int i = 1; i < n; ++i) {
            if (board[i][0]!='X') {
                dp[i][0]=dp[i-1][0]+board[i][0]-'0';
                v[i][0]=v[i-1][0];
            }else{
                break;
            }
        }
        for (int i = 1; i < n; ++i) {
            if (board[0][i]!='X'){
                dp[0][i]=dp[0][i-1]+board[0][i]-'0';
                v[0][i]=v[0][i-1];
            }else{
                break;
            }
        }
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < n; ++j) {
                if (board[i][j]!='X'){
                    ll MAX=max({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                    if (dp[i-1][j]==MAX){
                        v[i][j]=(v[i][j]+v[i-1][j])%N;
                    }
                    if (dp[i][j-1]==MAX){
                        v[i][j]=(v[i][j]+v[i][j-1])%N;
                    }
                    if (dp[i-1][j-1]==MAX){
                        v[i][j]=(v[i][j]+v[i-1][j-1])%N;
                    }
                    dp[i][j]=MAX+board[i][j]-'0';
                }
            }
        }
        if (dp[n-1][n-1]==0||v[n-1][n-1]==0)
            return {0,0};
        else
            return {(int)dp[n-1][n-1]-1,int(v[n-1][n-1]%N)};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}