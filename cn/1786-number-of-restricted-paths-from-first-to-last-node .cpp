#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int countRestrictedPaths(int n, vector<vector<int>>& edges) {
        vector<ll>dis(n+1,LLONG_MAX);
        vector<vector<pair<ll,ll>>>g(n+1);
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<>>q;
        for (auto &i: edges){
            g[i[0]].emplace_back(i[1],i[2]);
            g[i[1]].emplace_back(i[0],i[2]);
        }
        dis[n]=0;
        q.emplace(0,n);
        while (!q.empty()){
            auto [d,node]=q.top();
            q.pop();
            if (d>dis[node])
                continue;
            for (auto &[to,tod]: g[node]){
                if (d+tod<dis[to]){
                    dis[to]=d+tod;
                    q.emplace(dis[to],to);
                }
            }
        }
        vector<bool>vis(n+1);
        vector<ll>v(n+1);
        auto dfs=[&](auto&&dfs,int i)->ll{
            if (i==n)
                return 1;
            vis[i]=1;
            ll ans=0;
            for (auto &[to,d]: g[i]){
                if (dis[to]<dis[i]){
                    if (vis[to]){
                        ans=(ans+v[to])%N;
                    }else{
                        ans=(ans+dfs(dfs,to))%N;
                    }
                }
            }
            return v[i]=ans;
        };
        return dfs(dfs,1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}