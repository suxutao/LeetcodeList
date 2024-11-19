#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>c(n);
        function<bool(int,bool)> dfs=[&](int x,bool color){
            c[x]=color?1:2;
            for (auto &i: graph[x]){
                if (c[i]==c[x])
                    return false;
                if (!c[i]){
                    if (!dfs(i,!color))
                        return false;
                }
            }
            return true;
        };
        for (int i = 0; i < n; ++i) {
            if (!c[i]){
                if (!dfs(i,1))
                    return false;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}