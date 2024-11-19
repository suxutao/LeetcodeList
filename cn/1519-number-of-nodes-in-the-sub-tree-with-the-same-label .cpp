#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    vector<vector<int>>g;
    string s;
    unordered_map<char,int> dfs(int u,int fa){
        unordered_map<char,int>m;
        for (auto &i: g[u]){
            if (i==fa)
                continue;
            auto t=dfs(i,u);
            for (auto &[a,b]: t){
                m[a]+=b;
            }
        }
        v[u]=++m[s[u]];
        return m;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        v.resize(n);
        g.resize(n);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        s=labels;
        dfs(0,0);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}