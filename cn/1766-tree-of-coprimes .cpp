#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>G[100005]={},zu[51],ans,dep;
    vector<bool>vis;
    void dfs(int node,int depth,vector<int>& n){
        zu[n[node]].push_back(node);
        dep[node]=depth;
        for (auto &i: G[node]){
            if (!vis[i]){
                vis[i]=1;
                for (int k = 1; k <= 50; ++k) {
                    if (zu[k].empty())
                        continue;
                    int j = zu[k].back();
                    if ((ans[i]==-1||dep[j]>dep[ans[i]])&&__gcd(n[j],n[i])==1){
                        ans[i]=j;
                    }
                }
                dfs(i,depth+1,n);
            }
        }
        zu[n[node]].pop_back();
    }
    vector<int> getCoprimes(vector<int>& nums, vector<vector<int>>& edges) {
        int n=nums.size();
        vis.assign(n,0);
        ans.assign(n,-1);
        dep.resize(n);
        for (auto &i: edges){
            G[i[0]].push_back(i[1]);
            G[i[1]].push_back(i[0]);
        }
        vis[0]=1;
        dfs(0,0,nums);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}