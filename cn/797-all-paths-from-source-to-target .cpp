#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int k;
    vector<vector<int>>vv;
    vector<int>v;
    void dfs(vector<vector<int>>& graph,int pos){
        if (!v.empty()&&v.back()==k-1){
            vv.push_back(v);
            return;
        }
        if (pos>=k||graph[pos].empty())
            return;
        for (int i = 0; i < graph[pos].size(); ++i) {
            v.push_back(graph[pos][i]);
            dfs(graph,graph[pos][i]);
            v.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        k=graph.size();
        v.push_back(0);
        dfs(graph,0);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}