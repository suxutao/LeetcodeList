#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int minMaxWeight(int n, vector<vector<int>>& edges, int threshold) {
        if (edges.size()<n-1){
            return -1;
        }
        vector<int>dis(n,INT_MAX);
        vector<vector<pii>>g(n);
        priority_queue<pii,vector<pii>,greater<>>q;
        for (auto &i: edges){
            g[i[1]].push_back({i[0],i[2]});
        }
        q.emplace(0,0);
        dis[0]=0;
        while (!q.empty()){
            auto[w,obj]=q.top();
            q.pop();
            if (w>dis[obj])
                continue;
            for (auto &[j,d]: g[obj]){
                int d_new= max(d,w);
                if (d_new<dis[j]){
                    dis[j]=d_new;
                    q.emplace(dis[j],j);
                }
            }
        }
        int ans=ranges::max(dis);
        return ans==INT_MAX?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}