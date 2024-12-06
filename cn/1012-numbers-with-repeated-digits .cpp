#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numDupDigitsAtMostN(int n) {
        string s=to_string(n);
        int m=s.size();
        vector<vector<int>>dp(m,vector<int>(4100,-1));
        auto dfs=[&](auto&&dfs,int i,int mask,bool isLimit,bool isNum)->int{
            if (i==m)
                return mask>>10;
            if (!isLimit&&isNum&&~dp[i][mask])
                return dp[i][mask];
            int ans=0;
            if (!isNum)
                ans=dfs(dfs,i+1,0,0,0);
            int up=isLimit?s[i]-'0':9;
            for (int j = 1-isNum; j <= up; ++j) {
                if (mask>>j&1)
                    ans+=dfs(dfs,i+1,mask|(1<<10),isLimit&&j==up,1);
                else
                    ans+=dfs(dfs,i+1,mask|(1<<j),isLimit&&j==up,1);
            }
            if (!isLimit&&isNum)
                dp[i][mask]=ans;
            return ans;
        };
        return dfs(dfs,0,0,1,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}