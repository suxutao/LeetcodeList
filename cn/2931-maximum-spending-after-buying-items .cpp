#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxSpending(vector<vector<int>>& values) {
        ll ans=0,m=values.size(),n=values[0].size(),cnt=1;
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<>>q;
        vector<int>v(m,n-2);
        for (int i = 0; i < m; ++i) {
            q.push({values[i][n-1],i});
        }
        while (!q.empty()){
            ll a=q.top().first,b=q.top().second;
            ans+=cnt*a;
            q.pop();
            if (v[b]>=0){
                q.push({values[b][v[b]--],b});
            }
            ++cnt;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}