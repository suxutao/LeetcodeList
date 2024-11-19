#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string largestNumber(vector<int>& cost, int target) {
        vector<int>dp(target+1,INT_MIN);
        string ans;
        dp[0]=0;
        reverse(cost.begin(), cost.end());
        for (int i = 0; i < cost.size(); ++i) {
            for (int j = cost[i]; j <= target; ++j) {
                dp[j]= max(dp[j],dp[j-cost[i]]+1);
            }
        }
        if (dp[target]<0)
            return "0";
        for (int i = 0,j=target; i < cost.size(); ++i) {
            for (int k = cost[i]; j>=k&&dp[j]==dp[j-k]+1;j-=k) {
                ans.push_back('9'-i);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}