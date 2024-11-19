#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int dp[22][22]={};
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        for (int i = 0; i < n; ++i) {
            dp[i][i]=nums[i];
        }
        for (int l = 2; l <= n; ++l) {
            for (int i = 0; i <= n - l; ++i) {
                int j=i+l-1;
                dp[i][j]= max(nums[i]-dp[i+1][j],nums[j]-dp[i][j-1]);
            }
        }
        return dp[0][n-1]>=0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}