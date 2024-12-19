#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<int> minEdgeReversals(int n, vector<vector<int>>& edges) {
        vector<int>v(n);
        unordered_set<ll>s;
        vector<vector<int>>g(n);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
            s.insert((ll)i[1]<<32|i[0]);
        }
        auto dfs=[&](auto&&dfs,int fa,int u)->void {
            for (auto &i: g[u]){
                if (fa==i)
                    continue;
                v[0]+=s.contains((ll)u<<32|i);
                dfs(dfs,u,i);
            }
        };
        auto dfs2=[&](auto&&dfs2,int fa,int u)->void {
            for (auto &i: g[u]){
                if (fa==i)
                    continue;
                v[i]=v[u]-(s.contains((ll)u<<32|i)?1:-1);
                dfs2(dfs2,u,i);
            }
        };
        dfs(dfs,0,0);
        dfs2(dfs2,0,0);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}