#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        ll ans=0;
        int n=roads.size()+1;
        vector<vector<int>>g(n);
        for (auto &i: roads){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        function<int(int,int)> dfs=[&](int u,int fa){
            if (u&&g[u].size()==1){
                ans++;
                return 1;
            }
            int sum=1;
            for (auto &i: g[u]){
                if (i==fa)
                    continue;
                sum+=dfs(i,u);
            }
            if (u)
                ans+=ceil((double)sum/seats);
            return sum;
        };
        dfs(0,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}