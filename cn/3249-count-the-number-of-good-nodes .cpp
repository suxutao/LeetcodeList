#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countGoodNodes(vector<vector<int>>& edges) {
        int n=edges.size()+1,ans=0;
        vector<vector<int>>g(n);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        function<int(int,int)>dfs=[&](int u,int fa){
            if (g[u].size()==1&&g[u][0]==fa){
                ++ans;
                return 1;
            }
            unordered_set<int>s;
            int jie=1;
            for (auto &i: g[u]){
                if (i==fa)
                    continue;
                int t=dfs(i,u);
                s.insert(t);
                jie+=t;
            }
            if (s.size()==1)
                ans++;
            return jie;
        };
        dfs(0,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}