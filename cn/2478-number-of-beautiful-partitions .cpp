#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int beautifulPartitions(string s, int k, int minLength) {
        bool arr[10]{0,0,1,1,0,1,0,1};
        int n=s.size();
        if (!arr[s[0]-'0']||arr[s.back()-'0']||k*minLength>n)
            return 0;
        vector<vector<int>>dp(k+1,vector<int>(n+1));
        dp[0][0]=1;
        for (int i = 1; i <= k; ++i) {
            int sum=0;
            for (int j = i*minLength; j+(k-i)*minLength <= n; ++j) {
                int t=j-minLength;
                if (t==0||arr[s[t]-'0']&&!arr[s[t-1]-'0'])
                    sum=(sum+dp[i-1][j-minLength])%N;
                if (j==n||arr[s[j]-'0']&&!arr[s[j-1]-'0'])
                    dp[i][j]=sum;
            }
        }
        return dp[k][n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}