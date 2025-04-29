#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    vector<int>ans;
    vector<vector<pair<int,ll>>>g;
    void dfs(int u,ll ji){
        ans[u]=ji;
        for (auto &[to,w]: g[u]){
            dfs(to,w*ji%N);
        }
    }
    vector<int> baseUnitConversions(vector<vector<int>>& conversions) {
        int n=conversions.size()+1;
        g.resize(n);
        ans.resize(n);
        for (auto &v: conversions){
            g[v[0]].push_back({v[1],v[2]});
        }
        dfs(0,1);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}