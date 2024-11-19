#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>v,G[n],in(n);
        queue<int>q;
        for (int i = 0; i < n; ++i) {
            if (graph[i].size()==0)
                q.push(i);
            for (auto &j: graph[i]){
                G[j].push_back(i);
                in[i]++;
            }
        }
        while (!q.empty()){
            v.push_back(q.front());
            q.pop();
            for (auto &i: G[v.back()]){
                --in[i];
                if (in[i]==0)
                    q.push(i);
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}