#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days.back()+1);
        unordered_set<int>s(days.begin(),days.end());
        for (int i = 1; i <= days.back(); ++i) {
            if (s.contains(i))
                dp[i]=min({dp[i-1]+costs[0],dp[max(0,i-7)]+costs[1],costs[2]+dp[max(0,i-30)]});
            else
                dp[i]=dp[i-1];
        }
        return dp.back();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}