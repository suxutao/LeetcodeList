#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximizeWin(vector<int>& prizePositions, int k) {
        int n=prizePositions.size(),ans=0;
        vector<int>dp(n+1);
        for (int i = n-1; i >= 0; --i) {
            int pos=upper_bound(prizePositions.begin(), prizePositions.end(),prizePositions[i]+k)-prizePositions.begin();
            ans= max(ans,dp[pos]+pos-i);
            dp[i]= max(dp[i+1],pos-i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}