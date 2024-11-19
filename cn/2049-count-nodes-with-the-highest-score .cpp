#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int countHighestScoreNodes(vector<int>& parents) {
        ll n=parents.size(),ans=0,MAX=INT_MIN;
        vector<vector<int>>g(n);
        for (int i = 1; i < parents.size(); ++i) {
            g[parents[i]].push_back(i);
        }
        function<ll(int)> dfs=[&](int u){
            ll a=0,b=0;
            if (g[u].empty()){
                if (n-1>MAX){
                    MAX=n-1;
                    ans=1;
                }else if (n-1==MAX){
                    ans++;
                }
                return 1ll;
            }
            if (g[u].size()>0)
                a=dfs(g[u][0]);
            if (g[u].size()>1)
                b=dfs(g[u][1]);
            ll t=max(1ll,a)*max(1ll,b)*max(1ll,n-a-b-1);
            if (t==MAX){
                ans++;
            }else if (t>MAX){
                MAX=t;
                ans=1;
            }
            return 1+a+b;
        };
        dfs(0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}