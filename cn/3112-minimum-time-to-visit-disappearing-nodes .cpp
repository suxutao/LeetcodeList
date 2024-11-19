#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    struct edge{
        int to;
        ll w;
    };
    vector<edge>G[50005];
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
        vector<int>v(n,INT_MAX/2);
        vector<bool>vis(n);
        v[0]=0;
        for (auto &i: edges){
            G[i[0]].push_back({i[1],i[2]});
            G[i[1]].push_back({i[0],i[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>q;
        q.push({0,0});
        while (!q.empty()){
            auto t=q.top();q.pop();
            if (vis[t.second])
                continue;
            vis[t.second]=1;
            for (auto &i: G[t.second]){
                if (vis[i.to])
                    continue;
                if (v[i.to]>i.w+t.first){
                    v[i.to]=i.w+t.first;
                    if (disappear[i.to]>v[i.to])
                        q.push({v[i.to],i.to});
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            if (v[i]>=disappear[i])
                v[i]=-1;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}