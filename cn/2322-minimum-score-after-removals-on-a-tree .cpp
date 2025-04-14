#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumScore(vector<int>& nums, vector<vector<int>>& edges) {
        int n=nums.size();
        vector<vector<int>>g(n);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        int time=0,ans=INT_MAX,x,y,z;
        vector<int>xr(n),in(n),out(n);
        auto dfs=[&](auto&&dfs,int u,int fa)->void {
            in[u]=++time;
            xr[u]=nums[u];
            for (auto &i: g[u]){
                if (i==fa)
                    continue;
                dfs(dfs,i,u);
                xr[u]^=xr[i];
            }
            out[u]=time;
        };
        auto is_ancestor=[&](int x,int y)->bool {
            return in[x]<in[y]&&in[y]<=out[x];
        };
        dfs(dfs,0,0);
        for (int i = 2; i < n; ++i) {
            for (int j = 1; j < i; ++j) {
                if (is_ancestor(i,j)){
                    x=xr[j];
                    y=xr[i]^xr[j];
                    z=xr[0]^xr[i];
                }else if (is_ancestor(j,i)){
                    x=xr[i];
                    y=xr[i]^xr[j];
                    z=xr[0]^xr[j];
                }else{
                    x=xr[i];
                    y=xr[j];
                    z=xr[0]^x^y;
                }
                ans= min(ans,max({x,y,z})- min({x,y,z}));
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}