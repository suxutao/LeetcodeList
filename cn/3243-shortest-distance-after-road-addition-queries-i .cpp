#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>g(n);
        vector<int>ans;
        for (int i = 0; i < n-1; ++i) {
            g[i].push_back(i+1);
        }
        for (auto &i: queries){
            g[i[0]].push_back(i[1]);
            queue<int>q;q.push(0);
            vector<bool>vis(n);
            int cnt=0;vis[0]=1;
            while (!q.empty()){
                int sz=q.size();
                for (int j = 0; j < sz; ++j) {
                    int t=q.front();q.pop();
                    if (t==n-1){
                        ans.push_back(cnt);
                        while (!q.empty()) q.pop();
                        break;
                    }
                    for (auto &k: g[t]){
                        if (!vis[k]){
                            vis[k]=1;
                            q.push(k);
                        }
                    }
                }
                ++cnt;
            }

        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}