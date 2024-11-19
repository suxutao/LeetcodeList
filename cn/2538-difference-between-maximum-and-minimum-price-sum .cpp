#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    ll ans=0;
    vector<vector<int>>g;
    pair<ll,ll> dfs(int u,int fa,vector<int>&p){
        ll mx=p[u],mn=0;
        for (auto &i: g[u]){
            if (i==fa)
                continue;
            auto[a,b]=dfs(i,u,p);
            ans= max(ans, max(a+mn,b+mx));
            mx= max(mx,a+p[u]);
            mn= max(mn,b+p[u]);
        }
        return {mx,mn};
    }
    long long maxOutput(int n, vector<vector<int>>& edges, vector<int>& price) {
        g.resize(n);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        dfs(0,0,price);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}