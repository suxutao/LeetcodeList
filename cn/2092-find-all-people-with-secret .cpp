#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    unordered_map<ll,bool>vis;
    unordered_set<int>ans;
    vector<vector<array<int,2>>>g;
    void dfs(int u,int fa,int time){
        ans.insert(u);
        for (auto &[to,w]: g[u]){
            if (fa==to||w<time||vis[(ll)to<<40|(ll)u<<20|w]||vis[(ll)u<<40|(ll)to<<20|w])
                continue;
            vis[(ll)to<<40|(ll)u<<20|w]=1;
            vis[(ll)u<<40|(ll)to<<20|w]=1;
            dfs(to,u,w);
        }
    }
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        g.resize(n);
        for (auto &i: meetings){
            g[i[0]].push_back({i[1],i[2]});
            g[i[1]].push_back({i[0],i[2]});
        }
        vis[(ll)firstPerson<<40]=vis[(ll)firstPerson<<20]=1;
        dfs(0,-1,0);
        dfs(firstPerson,-1,0);
        return vector<int>(ans.begin(),ans.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}