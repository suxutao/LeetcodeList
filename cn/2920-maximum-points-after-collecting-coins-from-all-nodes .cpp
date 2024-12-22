#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumPoints(vector<vector<int>>& edges, vector<int>& coins, int k) {
        int n=coins.size();
        vector<vector<int>>g(n),memo(n,vector<int>(15,-1));
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        auto dfs=[&](auto&&dfs,int fa,int u,int cnt)->int{
            int &ans=memo[u][cnt];
            if (~ans)
                return ans;
            int ans1=(coins[u]>>cnt)-k,ans2=coins[u]>>(cnt+1);
            for (auto &i: g[u]){
                if (i==fa)
                    continue;
                ans1+=dfs(dfs,u,i,cnt);
                if (cnt<13)
                    ans2+=dfs(dfs,u,i,cnt+1);
            }
            return ans=max(ans1,ans2);
        };
        return dfs(dfs,0,0,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}