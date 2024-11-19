#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    struct edge{
        int to,w;
        edge(){}
        edge(int to,int w):to(to),w(w){}
    };
    vector<edge>G[1005];
    bool vis[1005]={1};
    int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime) {
        int ans=values[0];
        for (auto &item: edges){
            G[item[0]].emplace_back(item[1],item[2]);
            G[item[1]].emplace_back(item[0],item[2]);
        }
        function<void(int,int,int)> dfs=[&](int to,int val,int time){
            if (time>maxTime)
                return;
            if (to==0)
                ans= max(ans,val);
            for (auto &i: G[to]){
                if (vis[i.to]) {
                    dfs(i.to,val,time+i.w);
                }else{
                    vis[i.to]=1;
                    dfs(i.to,val+values[i.to],time+i.w);
                    vis[i.to]=0;
                }
            }
        };
        for (auto &i: G[0]){
            vis[i.to]=1;
            dfs(i.to,values[0]+values[i.to],i.w);
            vis[i.to]=0;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}