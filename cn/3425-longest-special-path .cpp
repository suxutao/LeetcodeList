#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> longestSpecialPath(vector<vector<int>>& edges, vector<int>& nums) {
        int n=edges.size()+1;
        vector<int>ans{-1,0},dis{0};
        unordered_map<int,int>last_depth;
        vector<vector<pair<int,int>>>g(n);
        for (auto &edge: edges){
            g[edge[0]].push_back({edge[1],edge[2]});
            g[edge[1]].push_back({edge[0],edge[2]});
        }
        auto dfs=[&](auto&&dfs,int u,int fa,int top_depth)->void{
            int color=nums[u],old_depth=last_depth[color];
            top_depth= max(top_depth,old_depth);
            ans= max(ans,{dis.back()-dis[top_depth],top_depth-(int)dis.size()});

            last_depth[color]=dis.size();
            for (auto &[i,w]: g[u]){
                if (i!=fa){
                    dis.push_back(dis.back()+w);
                    dfs(dfs,i,u,top_depth);
                    dis.pop_back();
                }
            }
            last_depth[color]=old_depth;
        };
        dfs(dfs,0,0,0);
        return {ans[0],-ans[1]};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}