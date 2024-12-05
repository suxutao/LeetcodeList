#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countDigitOne(int n) {
        string s=to_string(n);
        int m=s.size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
        auto dfs=[&](auto&&dfs,int i,int sum,bool isLimit,bool isNum)->int{
            if (i==m)
                return sum;
            if (!isLimit&&isNum&&~dp[i][sum])
                return dp[i][sum];
            int ans=0;
            if (!isNum)
                ans=dfs(dfs,i+1,0,0,0);
            int up=isLimit?s[i]-'0':9;
            for (int j = isNum?0:1; j <= up; ++j) {
                ans+=dfs(dfs,i+1,sum+(j==1),isLimit&&j==up,1);
            }
            if (!isLimit&&isNum)
                dp[i][sum]=ans;
            return ans;
        };
        return dfs(dfs,0,0,1,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}