#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if (k==0)
            return 1;
        double pre=0;
        vector<double>dp(k+maxPts);
        for (int i = k; i <= min(n,k+maxPts-1); ++i) {
            dp[i]=1;
            pre++;
        }
        for (int i = k-1; i >= 0; --i) {
            dp[i]+=pre/maxPts;
            pre+=dp[i]-dp[i+maxPts];
        }
        return dp[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}