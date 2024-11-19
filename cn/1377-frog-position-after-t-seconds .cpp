#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        if (n==1)
            return 1;
        vector<vector<int>>g(n+1);
        vector<bool>vis(n+1);
        vector<double>ans(n+1);
        queue<int>q;
        q.push(1);vis[1]=1;ans[1]=1;
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        for (int k = 0; k < t&&!q.empty(); ++k) {
            int sz=q.size();
            for (int i = 0; i < sz; ++i) {
                int f=q.front();q.pop();
                if (f==1){
                    for (auto &j: g[f]){
                        vis[j]=1;
                        ans[j]=ans[f]/g[f].size();
                        q.push(j);
                    }
                    ans[f]=0;
                }else{
                    if (g[f].size()>1){
                        for (auto &j: g[f]){
                            if (!vis[j]){
                                vis[j]=1;
                                ans[j]=ans[f]/(g[f].size()-1);
                                q.push(j);
                            }
                        }
                        ans[f]=0;
                    }
                }
            }
        }
        return ans[target];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}