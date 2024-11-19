#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    struct edge{
        int to,w;
        edge(int to,int w):to(to),w(w){}
    };
    vector<edge>G[1005];
    int N;
    int ji(vector<int>&v){
        int ans=0;
        for (int i = 0; i < v.size(); ++i) {
            for (int j = i+1; j < v.size(); ++j) {
                ans+=v[i]*v[j];
            }
        }
        return ans;
    }
    int dfs(int u,int r,int dis){
        if (G[r].size()==1)
            return dis%N==0;
        int ans=dis%N==0;
        for (auto &i: G[r]){
            if (i.to==u)
                continue;
            ans+= dfs(r,i.to,dis+i.w);
        }
        return ans;
    }
    vector<int> countPairsOfConnectableServers(vector<vector<int>>& edges, int signalSpeed) {
        int n=edges.size()+1;N=signalSpeed;
        for (auto &i: edges){
            G[i[0]].emplace_back(i[1],i[2]);
            G[i[1]].emplace_back(i[0],i[2]);
        }
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            vector<int>t;
            for (auto &j: G[i]){
                t.push_back(dfs(i,j.to,j.w));
            }
            v[i]= ji(t);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}