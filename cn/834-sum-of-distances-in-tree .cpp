#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int>v(n),size(n,1);
        vector<vector<int>>g(n);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        auto dfs=[&](auto&&dfs,int fa,int u,int depth)->void{
            v[0]+=depth;
            for (auto &i: g[u]){
                if (fa!=i){
                    dfs(dfs,u,i,depth+1);
                    size[u]+=size[i];
                }
            }
        };
        auto dfs2=[&](auto&&dfs2,int fa,int u)->void {
            for (auto &i: g[u]){
                if (fa!=i){
                    v[i]=v[u]+n-size[i]*2;
                    dfs2(dfs2,u,i);
                }
            }
        };
        dfs(dfs,0,0,0);
        dfs2(dfs2,0,0);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}