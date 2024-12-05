#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        string s=to_string(n);
        int m=s.size();
        vector<int>dp(m,-1);
        auto dfs=[&](auto&&dfs,int i,bool isLimit,bool isNum)->int{
            if (i==m)
                return isNum;
            if (!isLimit&&isNum&&~dp[i])
                return dp[i];
            int ans=0;
            if (!isNum)
                ans=dfs(dfs,i+1,0,0);
            int up=isLimit?s[i]-'0':9;
            for (auto &item: digits){
                if (item[0]-'0'>up)
                    break;
                ans+=dfs(dfs,i+1,isLimit&&item[0]-'0'==up,1);
            }
            if (!isLimit&&isNum)
                dp[i]=ans;
            return ans;
        };
        return dfs(dfs,0,1,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}