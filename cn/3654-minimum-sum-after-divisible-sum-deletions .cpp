#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minArraySum(vector<int>& nums, int k) {
        int n=nums.size(),yu=0,p=0;
        vector<ll>pre(n+1),dp(n+1);
        vector<array<int,2>>pos;
        unordered_map<int,int>m;
        m[0]=-1;
        for (int i = 0; i < n; ++i) {
            yu= (yu + nums[i]) % k;
            pre[i+1]=pre[i]+nums[i];
            if (m.contains(yu)){
                pos.push_back({m[yu] + 1, i});
                m[yu]=i;
            }else{
                m[yu]=i;
            }
        }
        ranges::sort(pos,[&](auto&a,auto&b){
            return a[1]<b[1];
        });
        for (int i = 0; i < n; ++i) {
            dp[i+1]=dp[i];
            while (p<pos.size()&&i==pos[p][1]){
                dp[i+1]= max(dp[i+1],dp[pos[p][0]]+pre[i+1]-pre[pos[p][0]]);
                ++p;
            }
        }
        return pre[n]-dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}