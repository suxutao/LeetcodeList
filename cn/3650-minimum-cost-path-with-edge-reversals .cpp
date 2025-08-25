#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        vector<int>dis(n,INT_MAX);
        vector<vector<array<int,2>>>g(n);
        priority_queue<array<int,2>,vector<array<int,2>>,greater<>>q;
        for (auto &i: edges){
            g[i[0]].push_back({i[1],i[2]});
            g[i[1]].push_back({i[0],i[2]*2});
        }
        dis[0]=0;
        q.push({0,0});
        while (!q.empty()){
            auto [d,u]=q.top();
            q.pop();
            for (auto &[to,w]: g[u]){
                if (dis[to]>d+w){
                    dis[to]=d+w;
                    q.push({dis[to],to});
                }
            }
        }
        return dis[n-1]==INT_MAX?-1:dis[n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}