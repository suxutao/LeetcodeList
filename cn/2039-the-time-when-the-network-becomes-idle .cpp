#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int networkBecomesIdle(vector<vector<int>>& edges, vector<int>& patience) {
        vector<vector<int>>G(patience.size());
        vector<bool>vis(patience.size());
        int ans=0,cnt=1;vis[0]=1;
        for (auto &i: edges){
            G[i[0]].push_back(i[1]);
            G[i[1]].push_back(i[0]);
        }
        queue<int>q;q.push(0);
        while (!q.empty()){
            int sz=q.size();
            for (int i = 0; i < sz; ++i) {
                int t=q.front();q.pop();
                for (auto &j: G[t]){
                    if (!vis[j]){
                        vis[j]=1;
                        int time=patience[j]*((2*cnt-1)/patience[j])+2*cnt+1;
                        ans=max(ans,time);
                        q.push(j);
                    }
                }
            }
            cnt++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>edges{{0,1},{1,2}};
    vector<int>patience{0,2,1};
    Solution().networkBecomesIdle(edges,patience);
    return 0;
}