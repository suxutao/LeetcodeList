#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxWeight(int n, vector<vector<int>>& edges, int k, int t) {
        int ans=-1;
        vector<vector<pair<int,int>>>g(n);
        unordered_set<int>s;
        for (auto &i: edges){
            g[i[0]].emplace_back(i[1],i[2]);
        }
        auto dfs=[&](auto&&dfs,int u,int sum,int cnt)->void{
            if (sum>=t)
                return;
            if (cnt==k){
                ans= max(ans,sum);
                return;
            }
            if (!s.insert(u<<20|sum<<10|cnt).second)
                return;
            for (auto &[to,w]: g[u]){
                dfs(dfs,to,sum+w,cnt+1);
            }
        };
        for (int i = 0; i < n; ++i) {
            dfs(dfs,i,0,0);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}