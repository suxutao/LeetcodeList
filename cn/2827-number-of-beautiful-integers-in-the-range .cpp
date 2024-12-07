#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int cal(string s,int k){
        int n=s.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(100,vector<int>(30,-1)));
        auto dfs=[&](auto&&dfs,int i,int sum,bool isLimit,bool isNum,int ji)->int{
            if (i==n)
                return (sum%k==0)&&(ji==n);
            if (!isLimit&&isNum&&~dp[i][sum][ji])
                return dp[i][sum][ji];
            int ans=0;
            if (!isNum)
                ans=dfs(dfs,i+1,0,0,0,ji);
            int up=isLimit?s[i]-'0':9;
            for (int j = 1-isNum; j <= up; ++j) {
                if (j&1)
                    ans+=dfs(dfs,i+1,(sum*10+j)%k,isLimit&&j==up,1,ji+1);
                else
                    ans+=dfs(dfs,i+1,(sum*10+j)%k,isLimit&&j==up,1,ji-1);
            }
            if (!isLimit&&isNum)
                dp[i][sum][ji]=ans;
            return ans;
        };
        return dfs(dfs,0,0,1,0,n);
    }
    int numberOfBeautifulIntegers(int low, int high, int k) {
        string l=to_string(low-1);
        string h=to_string(high);
        return cal(h,k)-cal(l,k);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}