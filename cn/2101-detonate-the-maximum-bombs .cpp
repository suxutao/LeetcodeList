#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size(),ans=1,t;
        vector<int>vis(n);
        function<void(int)> dfs=[&](int pos){
            vis[pos]=1;
            ++t;
            for (int i = 0; i < n; ++i) {
                if (vis[i])
                    continue;
                if ((long long)(bombs[i][0]-bombs[pos][0])*(bombs[i][0]-bombs[pos][0])+(long long)(bombs[i][1]-bombs[pos][1])*(bombs[i][1]-bombs[pos][1])<=(long long)bombs[pos][2]*bombs[pos][2])
                    dfs(i);
            }
        };
        for (int i = 0; i < n; ++i) {
            fill(vis.begin(), vis.end(),0);
            t=0;
            dfs(i);
            ans= max(ans,t);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v={{1,2,3},{2,3,1},{3,4,2},{4,5,3},{5,6,4}};
    Solution().maximumDetonation(v);
    return 0;
}