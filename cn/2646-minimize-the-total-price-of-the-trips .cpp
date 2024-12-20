#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumTotalPrice(int n, vector<vector<int>>& edges, vector<int>& price, vector<vector<int>>& trips) {
        vector<int>cnt(n);
        vector<vector<int>>g(n);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        for (auto &i: trips){
            auto dfs=[&](auto&&dfs,int u,int fa)->bool {
                if (u==i[1]){
                    cnt[u]++;
                    return true;
                }
                for (auto &j: g[u]){
                    if (j!=fa&&dfs(dfs,j,u)){
                        cnt[u]++;
                        return true;
                    }
                }
                return false;
            };
            dfs(dfs,i[0],i[0]);
        }
        for (int i = 0; i < n; ++i) {
            price[i]*=cnt[i];
        }
        auto dp=[&](auto&&dp,int u,int fa)->pair<int,int>{
            if (u&&g[u].size()==1){
                return {price[u],price[u]/2};
            }
            int choose=0,choose_no=0;
            for (auto &i: g[u]){
                if (i==fa)
                    continue;
                auto [x,y]=dp(dp,i,u);
                choose_no+=min(x,y);
                choose+=x;
            }
            return {choose_no+price[u],choose+price[u]/2};
        };
        auto [x,y]=dp(dp,0,0);
        return min(x,y);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}