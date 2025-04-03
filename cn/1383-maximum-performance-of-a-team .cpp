#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const ll N=1e9+7;
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        ll ans=0,sum=0;
        vector<array<ll,2>>v(n);
        priority_queue<ll,vector<ll>,greater<>>q;
        for (int i = 0; i < n; ++i) {
            v[i]={efficiency[i],speed[i]};
        }
        ranges::sort(v,greater<>());
        for (int i = 0; i < n; ++i) {
            q.push(v[i][1]);
            sum=sum+v[i][1];
            if (q.size()>k){
                sum-=q.top();
                q.pop();
            }
            ans= max(ans,sum*v[i][0]);
        }
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}