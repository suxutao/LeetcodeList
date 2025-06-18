#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
using ll = long long;
class Lca{
    int n,m;
    vector<int>depth;
    vector<ll>dis;
    vector<vector<int>>pa;
public:
    Lca(vector<vector<int>>edge){
        n=edge.size()+1;
        m=bit_width((unsigned)n);
        vector<vector<array<int,2>>>g(n);
        depth.resize(n);
        dis.resize(n);
        pa.assign(n,vector<int>(m,-1));
        for (auto &i: edge){
            g[i[0]].push_back({i[1],i[2]});
            g[i[1]].push_back({i[0],i[2]});
        }
        auto dfs=[&](auto&&dfs,int u,int fa)->void{
            pa[u][0]=fa;
            for (auto &[to,w]: g[u]){
                if (to==fa)
                    continue;
                depth[to]=depth[u]+1;
                dis[to]=dis[u]+w;
                dfs(dfs,to,u);
            }
        };
        dfs(dfs,0,-1);
        for (int i = 1; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (~pa[j][i-1]){
                    pa[j][i]=pa[pa[j][i-1]][i-1];
                }
            }
        }
    }

    int kth_ancestor(int node,int k){
        for (int i = 0; i < m; ++i) {
            if (k>>i&1){
                node=pa[node][i];
                if (node==-1)
                    break;
            }
        }
        return node;
    }

    int get_lca(int x,int y){
        if (depth[x]>depth[y])
            swap(x,y);
        y= kth_ancestor(y,depth[y]-depth[x]);
        if (x==y)
            return x;
        for (int i = m-1; i >= 0; --i) {
            int px=pa[x][i],py=pa[y][i];
            if (px!=py){
                x=px;
                y=py;
            }
        }
        return pa[x][0];
    }

    ll get_dis(int x,int y){
        return dis[x]+dis[y]-2*dis[get_lca(x,y)];
    }

    int upto_dis(int x,ll d){
        ll dx=dis[x];
        for (int i = m-1; i >= 0; --i) {
            if (~pa[x][i]&&dx-dis[pa[x][i]]<=d){
                x=pa[x][i];
            }
        }
        return x;
    }
};
class Solution {
public:
    vector<int> findMedian(int n, vector<vector<int>>& edges, vector<vector<int>>& queries) {
        int nq=queries.size();
        Lca lca(edges);
        vector<int>ans(nq);
        for (int i = 0; i < nq; ++i) {
            if (queries[i][0]==queries[i][1]){
                ans[i]=queries[i][0];
            }else{
                int an=lca.get_lca(queries[i][0],queries[i][1]);
                ll xy=lca.get_dis(queries[i][0],queries[i][1]);
                ll dx=lca.get_dis(an,queries[i][0]);
                if (dx>=(xy+1)/2){
                    ans[i]=lca.kth_ancestor(lca.upto_dis(queries[i][0],(xy+1)/2-1),1);
                }else{
                    ans[i]=lca.upto_dis(queries[i][1],xy-(xy+1)/2);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}