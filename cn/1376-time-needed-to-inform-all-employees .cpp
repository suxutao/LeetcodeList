#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>G;
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int ans=0;
        G.resize(n);
        for (int i = 0; i < manager.size(); ++i) {
            if (~manager[i])
                G[manager[i]].push_back(i);
        }
        function<int(int,int)> dfs=[&](int u,int time){
            int f=time;
            if (G[u].empty())
                return time;
            for (auto &i: G[u]){
                f= max(f,dfs(i,time+informTime[u]));
            }
            ans= max(ans,f);
            return f;
        };
        dfs(headID,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}