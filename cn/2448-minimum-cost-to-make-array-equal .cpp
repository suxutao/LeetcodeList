#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n=nums.size();
        ll ans=LLONG_MAX,acc=accumulate(cost.begin(), cost.end(),0ll),sum=0,pre;
        vector<pair<ll,ll>>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]={nums[i],cost[i]};
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; ++i) {
            sum+=(v[i].first-v[0].first)*v[i].second;
        }
        ans=sum;
        acc-=v[0].second;pre=v[0].second;
        for (int i = 1; i < n; ++i) {
            sum-=(v[i].first-v[i-1].first)*acc;
            sum+=(v[i].first-v[i-1].first)*pre;
            acc-=v[i].second;
            pre+=v[i].second;
            ans=min(ans,sum);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}