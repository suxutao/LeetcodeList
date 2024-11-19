#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>G[55];
    vector<bool>vis;
    int E,V;
    void dfs(int x){
        vis[x]=1;
        V++;
        E+=G[x].size();
        for (auto &item: G[x]){
            if (!vis[item])
                dfs(item);
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vis.resize(n);
        int ans=0;
        for (auto &v: edges){
            G[v[0]].push_back(v[1]);
            G[v[1]].push_back(v[0]);
        }
        for (int i = 0; i < n; ++i) {
            if (!vis[i]){
                E=V=0;
                dfs(i);
                ans+=E==V*(V-1);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}