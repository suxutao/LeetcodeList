#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int n;
    vector<ll>v;
    vector<int>G[20005];
    vector<ll> dfs(int u,int fa,vector<int>&c){
        if (u&&G[u].size()==1){
            v[u]=1;
            if(c[u]>=0)
                return {1,c[u],0,0,0,0};
            else
                return {1,0,0,0,c[u],0};
        }
        ll cnt=0,a,b,d,e,f;
        priority_queue<int>q;
        priority_queue<int,vector<int>,greater<>>q2;
        c[u]>=0?q.push(c[u]):q2.push(c[u]);
        for (auto &i: G[u]){
            if (i==fa)
                continue;
            auto tu=dfs(i,u,c);
            cnt+= tu[0];
            q.push(tu[1]);
            q.push(tu[2]);
            q.push(tu[3]);
            q2.push(tu[4]);
            q2.push(tu[5]);
        }
        if (cnt<2){
            v[u]=1;
            d=0;
            a=q.top();q.pop();
            b=q.top();
            e=q2.top();q2.pop();
            f=q2.top();
        }else{
            a=q.top();q.pop();
            b=q.top();q.pop();
            d=q.top();
            e=q2.top();q2.pop();
            f=q2.top();
            v[u]=max(a*b*d,a*e*f);
        }
        return {cnt+1,a,b,d,e,f};
    }
    vector<long long> placedCoins(vector<vector<int>>& edges, vector<int>& cost) {
        n=cost.size();
        v.resize(n);
        for (auto &i: edges){
            G[i[0]].push_back(i[1]);
            G[i[1]].push_back(i[0]);
        }
        dfs(0,0,cost);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>vv={{0,1},{0,2},{2,3}};
    vector<int>v={10000,-10000,10000,-10000};
    Solution().placedCoins(vv,v);
    return 0;
}