#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n=colors.size(),ans=0;
        queue<int>q;
        vector<bool>vis(n);
        vector<int>in(n),v;
        vector<array<int,26>>dp(n);
        vector<vector<int>>g(n);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            in[i[1]]++;
        }
        for (int i = 0; i < n; ++i) {
            if (in[i]==0)
                q.push(i),v.push_back(i);
            dp[i][colors[i]-'a']=1;
        }
        while (!q.empty()){
            int t=q.front();
            q.pop();
            for (auto &i: g[t]){
                in[i]--;
                if (in[i]==0)
                    q.push(i);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (in[i])
                return -1;
        }
        auto dfs=[&](auto&&dfs,int u)->void{
            for (auto &i: g[u]){
                if (!vis[i]){
                    vis[i]=1;
                    dfs(dfs,i);
                }
                for (int j = 0; j < 26; ++j) {
                    if (j==colors[u]-'a')
                        dp[u][j]= max(dp[u][j],1+dp[i][j]);
                    else
                        dp[u][j]= max(dp[u][j],dp[i][j]);
                }
            }
        };
        for (int i = 0; i < v.size(); ++i) {
            vis[v[i]]=1;
            dfs(dfs,v[i]);
            ans= max(ans,ranges::max(dp[v[i]]));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}