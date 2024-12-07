#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int countSteppingNumbers(string low, string high) {
        int n=high.size();
        low=string(n-low.size(),'0')+low;
        vector<vector<ll>>dp(n,vector<ll>('9'+1,-1));
        auto dfs=[&](auto&&dfs,int i,char pre,bool lowLimit,bool highLimit,bool isNum)->ll{
            if (i==n)
                return isNum;
            if (!lowLimit&&!highLimit&&isNum&&~dp[i][pre])
                return dp[i][pre];
            ll ans=0;
            if (low[i]=='0'&&!isNum)
                ans=dfs(dfs,i+1,0,1,0,0);
            int up=highLimit?high[i]-'0':9;
            int down=lowLimit?low[i]-'0':0;
            for (int j = max(down,1-isNum); j <= up; ++j) {
                if (!isNum || abs(j-pre)==1)
                    ans=(ans+dfs(dfs,i+1,j,lowLimit&&j==down,highLimit&&j==up,1))%N;
            }
            if (!lowLimit&&!highLimit&&isNum)
                dp[i][pre]=ans;
            return ans;
        };
        return dfs(dfs,0,0,1,1,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}