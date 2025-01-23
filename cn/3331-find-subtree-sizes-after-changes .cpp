#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n=parent.size();
        vector<int>ans(n),pos('z'+1,-1);
        vector<vector<int>>g(n);
        for (int i = 0; i < n; ++i) {
            if (~parent[i]){
                g[parent[i]].push_back(i);
            }
        }
        auto dfs=[&](auto&&dfs,int u)->void{
            int old_pos=pos[s[u]];
            if (~pos[s[u]]){
                parent[u]=pos[s[u]];
            }
            for (auto &i: g[u]){
                pos[s[u]]=u;
                dfs(dfs,i);
                pos[s[u]]=old_pos;
            }
        };
        dfs(dfs,0);
        g.clear();
        g.resize(n);
        for (int i = 0; i < n; ++i) {
            if (~parent[i]){
                g[parent[i]].push_back(i);
            }
        }
        auto cal=[&](auto&&cal,int u)->int{
            int res=1;
            for (auto &i: g[u]){
                res+=cal(cal,i);
            }
            return ans[u]=res;
        };
        cal(cal,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}