#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sz;
    vector<vector<int>>dp;
    string s;
    int dfs(int i,int mask,bool is_limit,bool is_num){
        if (i==sz)
            return is_num;
        if (!is_limit&&is_num&&~dp[i][mask]){
            return dp[i][mask];
        }
        int ans=0;
        if (!is_num)
            ans= dfs(i+1,mask,0,0);
        int up=is_limit?s[i]-'0':9;
        for (int j = is_num?0:1; j <= up; ++j) {
            if (!(mask>>j&1)){
                ans+=dfs(i+1,mask|(1<<j),is_limit&&j==up,1);
            }
        }
        if (!is_limit&&is_num){
            dp[i][mask]=ans;
        }
        return ans;
    }
    int countSpecialNumbers(int n) {
        s=to_string(n);
        sz=s.size();
        dp.assign(sz,vector<int>(1<<10,-1));
        return dfs(0,0,1,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}