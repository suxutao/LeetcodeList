#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>g(n),ans;
        vector<int>num(n),low(n);
        int cnt=0;
        for (auto &i: connections){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        function<void(int,int)> dfs=[&](int u,int fa){
            low[u]=num[u]=cnt++;
            for (auto &i: g[u]){
                if (!num[i]){
                    dfs(i,u);
                    low[u]= min(low[u],low[i]);
                    if (low[i]>num[u])
                        ans.push_back({u,i});
                }else if (num[i]<num[u]&&i!=fa){
                    low[u]= min(low[u],num[i]);
                }
            }
        };
        dfs(0,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}