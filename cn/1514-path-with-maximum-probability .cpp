#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<double, int>;
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pii>>g(n);
        vector<double>dis(n);
        for (int i = 0; i < edges.size(); ++i) {
            g[edges[i][0]].emplace_back(succProb[i],edges[i][1]);
            g[edges[i][1]].emplace_back(succProb[i],edges[i][0]);
        }
        priority_queue<pii>q;
        q.emplace(1,start_node);
        dis[start_node]=1;
        while (!q.empty()){
            auto [a,b]=q.top();
            if (b==end_node)
                return a;
            q.pop();
            if (a<dis[b])
                continue;
            for (auto &[x,y]: g[b]){
                double t=dis[b]*x;
                if (t>dis[y]){
                    dis[y]=t;
                    q.emplace(t,y);
                }
            }
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}