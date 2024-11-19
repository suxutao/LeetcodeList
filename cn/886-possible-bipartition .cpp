#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>g(n+1);
        vector<int>c(n+1);
        for (auto &i: dislikes){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        function<bool(int,bool)> dfs=[&](int x,bool color){
            c[x]=color?1:2;
            for (auto &i: g[x]){
                if (c[i]==c[x])
                    return false;
                if (!c[i]){
                    if (!dfs(i,!color))
                        return false;
                }
            }
            return true;
        };
        for (int i = 1; i <= n; ++i) {
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