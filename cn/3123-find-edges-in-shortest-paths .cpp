#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using tup = tuple<int,long long,int>;
    using pii = pair<long long, int>;
    vector<bool> findAnswer(int n, vector<vector<int>>& edges) {
        vector<bool>ans(edges.size());
        vector<vector<tup>>g(n);
        vector<long long>dis(n,LLONG_MAX);
        priority_queue<pii,vector<pii>,greater<>>q;
        int cnt=0;
        for (auto &i: edges){
            g[i[0]].emplace_back(i[1],i[2],cnt);
            g[i[1]].emplace_back(i[0],i[2],cnt);
            cnt++;
        }
        q.emplace(0,0);dis[0]=0;
        while (!q.empty()){
            auto [a,b]=q.top();q.pop();
            if (a>dis[b])
                continue;
            for (auto &[x,y,z]: g[b]){
                long long t=y+a;
                if (t<dis[x]){
                    dis[x]=t;
                    q.emplace(dis[x],x);
                }
            }
        }
        if (dis[n-1]==LLONG_MAX)
            return ans;
        vector<bool>vis(n);
        function<void(int)> dfs=[&](int x){
            vis[x]=1;
            for (auto &[a,b,c]: g[x]){
                if (dis[x]==dis[a]+b){
                    ans[c]=1;
                    if(!vis[a])
                        dfs(a);
                }
            }
        };
        dfs(n-1);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}