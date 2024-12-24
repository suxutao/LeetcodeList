#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>>g(n);
        vector<int>deg(n),dp(n);
        queue<int>q;
        for (auto &i: relations){
            g[i[0]-1].push_back(i[1]-1);
            deg[i[1]-1]++;
        }
        for (int i = 0; i < n; ++i) {
            if (deg[i]==0)
                q.push(i);
        }
        while (!q.empty()){
            int t=q.front();
            q.pop();
            dp[t]+=time[t];
            for (auto &i: g[t]){
                --deg[i];
                dp[i]= max(dp[i],dp[t]);
                if (deg[i]==0)
                    q.push(i);
            }
        }
        return ranges::max(dp);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}