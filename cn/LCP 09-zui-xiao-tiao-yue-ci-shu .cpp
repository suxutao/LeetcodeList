#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minJump(vector<int>& jump) {
        int n=jump.size();
        vector<int>dp(n,INT_MAX);
        dp[n-1]=1;
        for (int i = n-2; i >= 0; --i) {
            if (i+jump[i]>=n){
                dp[i]=1;
            }else{
                dp[i]=1+dp[i+jump[i]];
            }
            for (int j = i+1; j < n&&dp[j]>=dp[i]+1; ++j) {
                dp[j]=dp[i]+1;
            }
        }
        return dp[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}