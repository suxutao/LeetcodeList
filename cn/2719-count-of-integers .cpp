#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int count(string num1, string num2, int min_sum, int max_sum) {
        ll n=num1.size(),cnt1=0;
        for (int i = 0; i < n; ++i) {
            cnt1+=num1[i]-'0';
        }
        vector<vector<ll>>dp(n,vector<ll>(n*9,-1));
        auto dfs=[&](auto&&dfs,int i,int sum,bool isLimit,bool isNum)->ll{
            if (i==n)
                return sum>=min_sum&&sum<=max_sum;
            if (!isLimit&&isNum&&~dp[i][sum])
                return dp[i][sum];
            ll ans=0;
            if (!isNum)
                ans=dfs(dfs,i+1,0,0,0)%N;
            int up=isLimit?num1[i]-'0':9;
            for (int j = 1-isNum; j <= up; ++j) {
                ans=(ans+dfs(dfs,i+1,sum+j,isLimit&&j==up,1))%N;
            }
            if (!isLimit&&isNum)
                dp[i][sum]=ans;
            return ans;
        };
        ll r1=dfs(dfs,0,0,1,0);
        num1=num2;
        n=num1.size();
        dp.assign(n,vector<ll>(n*9,-1));
        ll r2=dfs(dfs,0,0,1,0);
        return ((r2-r1+(cnt1>=min_sum&&cnt1<=max_sum))%N+N)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}