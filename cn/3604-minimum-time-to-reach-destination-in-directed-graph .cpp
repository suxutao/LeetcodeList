#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges) {
        vector<vector<array<int,3>>>g(n);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>q;
        vector<int>dis(n,INT_MAX);
        dis[0]=0;
        for (auto &i: edges){
            g[i[0]].push_back({i[1],i[2],i[3]});
        }
        q.push({0,0});
        while (!q.empty()){
            auto [w,node]=q.top();
            q.pop();
            for (auto &[to,start,end]: g[node]){
                if (w>end)
                    continue;
                int time=max(start,w)+1;
                if (time<dis[to]){
                    dis[to]=time;
                    q.push({time,to});
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