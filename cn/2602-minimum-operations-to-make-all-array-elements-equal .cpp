#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<ll>ans(queries.size()),v(n+1);
        for (int i = 0; i < n; ++i) {
            v[i+1]=v[i]+nums[i];
        }
        for (int i = 0; i < queries.size(); ++i) {
            ll t=lower_bound(nums.begin(), nums.end(),queries[i])-nums.begin();
            ans[i]=queries[i]*t-v[t]+v[n]-v[t]-queries[i]*(n-t);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v1{3,1,6,8},v2{1,5};
    Solution().minOperations(v1,v2);
    return 0;
}