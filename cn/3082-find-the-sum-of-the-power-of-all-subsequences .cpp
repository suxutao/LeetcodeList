#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int sumOfPower(vector<int>& nums, int k) {
        int n=nums.size(),ans=0,po=1;
        vector<vector<int>>dp(k+1,vector<int>(n+1));
        dp[0][0]=1;
        for (int i = 0; i < n; ++i) {
            for (int j = k; j >= nums[i]; --j) {
                for (int l = i+1; l ; --l) {
                    dp[j][l]=(dp[j][l]+dp[j-nums[i]][l-1])%N;
                }
            }
        }
        for (int l = n; l ; --l) {
            ans=(ans+(long long)dp[k][l]*po)%N;
            po=po*2%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}