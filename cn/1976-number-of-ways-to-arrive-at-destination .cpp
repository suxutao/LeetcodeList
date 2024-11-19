#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)

class Solution {
public:
    using ll = long long;
    const ll N=1e9+7;
    struct edge{
        ll to,w;
        edge(){}
        edge(ll to,ll w):to(to),w(w){}
    };
    struct node{
        ll id,dis;
        node(ll id,ll dis):id(id),dis(dis){}
        bool operator<(const node&a)const{
            return dis>a.dis;
        }
    };
    vector<edge>G[205];
    ll lu[205]={1},len[205]={0};
    bool vis[205]={0};
    priority_queue<node>q;
    int countPaths(int n, vector<vector<int>>& roads) {
        for (auto &i: roads){
            G[i[0]].emplace_back(i[1],i[2]);
            G[i[1]].emplace_back(i[0],i[2]);
        }
        for (int i = 1; i < n; ++i) {
            len[i]=LONG_LONG_MAX;
        }
        q.emplace(0,0);
        while (!q.empty()){
            node a=q.top();
            q.pop();
            if (vis[a.id])
                continue;
            vis[a.id]= true;
            for (auto &i: G[a.id]){
                if (vis[i.to])
                    continue;
                if (i.w+a.dis<len[i.to]){
                    len[i.to]=i.w+a.dis;
                    lu[i.to]=lu[a.id];
                    q.emplace(i.to,len[i.to]);
                }else if (i.w+a.dis==len[i.to]){
                    lu[i.to]=(lu[i.to]+lu[a.id])%N;
                }
            }
        }
        return lu[n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v={{1,0,10}};
    Solution().countPaths(2,v);
    return 0;
}