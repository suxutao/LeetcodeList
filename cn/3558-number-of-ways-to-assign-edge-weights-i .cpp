#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    vector<vector<int>>g;
    ll fast(ll a,ll x){
        ll ans=1;
        while (x){
            if (x&1)
                ans=ans*a%N;
            x>>=1;
            a=a*a%N;
        }
        return ans;
    }
    int depth(int u,int fa){
        int t=0;
        for (auto &i: g[u]){
            if (i==fa)
                continue;
            t= max(t, depth(i,u));
        }
        return t+1;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        g.resize(n+1);
        for (auto &i: edges){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        int dep=depth(1,1);
        return fast(2,dep-2);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}