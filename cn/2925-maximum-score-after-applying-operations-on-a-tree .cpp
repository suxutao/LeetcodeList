#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        int n=edges.size()+1;
        vector<ll>dp(n);
        vector<vector<int>>g(n);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        auto dfs=[&](auto&&dfs,int fa,int u)->ll{
            if (u&&g[u].size()==1){
                return values[u];
            }
            ll sum=0,dpt=0;
            for (auto &i: g[u]){
                if (i==fa)
                    continue;
                sum+=dfs(dfs,u,i);
                dpt+=dp[i];
            }
            dp[u]= max(sum,values[u]+dpt);
            return sum+values[u];
        };
        dfs(dfs,0,0);
        return dp[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}