#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    using pii = pair<ll, int>;
    const ll N=1e9+7;
    ll fast(ll x,ll a){
        ll ans=1;
        while (a){
            if (a&1)
                ans=(ans*x)%N;
            x=(x*x)%N;
            a>>=1;
        }
        return ans;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        if (multiplier==1)
            return nums;
        int n=nums.size(),mx=ranges::max(nums);
        priority_queue<pii,vector<pii>,greater<>>q;
        for (int i = 0; i < n; ++i) {
            q.emplace(nums[i],i);
        }
        while (k&&q.top().first<mx){
            auto [a,b]=q.top();
            q.pop();
            a*=multiplier;
            q.emplace(a,b);
            --k;
        }
        for (int i = 0; i < n; ++i) {
            auto [a,b]=q.top();
            q.pop();
            nums[b]=a%N*fast(multiplier,k/n+(i<k%n))%N;
        }
        return nums;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{2,1,3,5,6};
    Solution().getFinalState(v,5,2);
    return 0;
}