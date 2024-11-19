#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>G[100005];
    bool vis[100005]={0};
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        unordered_set<int>s(restricted.begin(),restricted.end());
        int ans=1;
        for (auto &i: edges){
            G[i[0]].push_back(i[1]);
            G[i[1]].push_back(i[0]);
        }
        function<void(int)>dfs=[&](int x){
            for (auto &i: G[x]){
                if (!vis[i]&&!s.count(i)){
                    vis[i]=1;
                    ans++;
                    dfs(i);
                }
            }
        };
        vis[0]=1;
        dfs(0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}