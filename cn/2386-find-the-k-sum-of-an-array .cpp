#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    typedef long long ll;
    typedef pair<ll, ll> pii;
    long long kSum(vector<int>& nums, int k) {
        ll ans=0ll;
        for (int&i:nums) {
            if (i>=0){
                ans+=i;
            }else{
                i=-i;
            }
        }
        sort(nums.begin(), nums.end());
        priority_queue<pii,vector<pii>,greater<>>q;
        q.emplace(0,0);
        while (--k){
            auto [s, i] = q.top();
            q.pop();
            if (i < nums.size()) {
                q.emplace(s+nums[i],i+1);
                if (i) {
                    q.emplace(s+nums[i]-nums[i-1],i+1);
                }
            }
        }
        return ans-q.top().first;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}