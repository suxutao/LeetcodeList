#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int countPartitions(vector<int>& nums, int k) {
        int n=nums.size(),l=0;
        vector<ll>dp(n+1),pre(n+1);
        deque<int>mx,mn;
        dp[0]=1;pre[0]=1;
        for (int i = 0; i < n; ++i) {
            pre[i+1]=(pre[i]+dp[i])%N;
            while (!mx.empty()&&nums[mx.back()]<=nums[i]){
                mx.pop_back();
            }
            while (!mn.empty()&&nums[mn.back()]>=nums[i]){
                mn.pop_back();
            }
            mx.push_back(i);
            mn.push_back(i);
            while (nums[mx.front()]-nums[mn.front()]>k){
                ++l;
                if (mx.front()<l)
                    mx.pop_front();
                if (mn.front()<l)
                    mn.pop_front();
            }
            dp[i+1]=(pre[i+1]-pre[l]+N)%N;
        }
        return dp[n]%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}