#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumValueSum(vector<int>& nums, ll k, vector<vector<int>>& edges) {
        int n=nums.size();
        ll dp[2]{0,LLONG_MIN},t[2]{};
        for (int i = 0; i < n; ++i) {
            t[0]= max(dp[0]+nums[i],dp[1]+(nums[i]^k));
            t[1]= max(dp[1]+nums[i],dp[0]+(nums[i]^k));
            dp[0]=t[0],dp[1]=t[1];
        }
        return dp[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{1,2,1};
    vector<vector<int>>vv;
    Solution().maximumValueSum(v,3,vv);
    return 0;
}