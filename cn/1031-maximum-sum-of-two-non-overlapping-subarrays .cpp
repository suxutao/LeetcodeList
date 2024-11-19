#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int n=nums.size(),sum1=0,sum2=0,ans=0;
        vector<array<int,2>>dp(n,{INT_MIN,INT_MIN});
        vector<array<int,2>>pre(n,{INT_MIN,INT_MIN});
        if (firstLen>secondLen)
            swap(firstLen,secondLen);
        for (int i = 0; i < firstLen; ++i) {
            sum1+=nums[i];
            if (i==firstLen-1)
                pre[i][0]=dp[i][0]=sum1;
        }
        for (int i = firstLen; i < n; ++i) {
            sum1+=nums[i]-nums[i-firstLen];
            pre[i][0]=sum1;
            dp[i][0]= max(dp[i-1][0],sum1);
        }
        for (int i = 0; i < secondLen; ++i) {
            sum2+=nums[i];
            if (i==secondLen-1)
                pre[i][1]=dp[i][1]=sum2;
        }
        for (int i = secondLen; i < n; ++i) {
            sum2+=nums[i]-nums[i-secondLen];
            pre[i][1]=sum2;
            dp[i][1]= max(dp[i-1][1],sum2);
        }
        for (int i = firstLen+secondLen-1; i < n; ++i) {
            ans= max(ans,pre[i][0]+dp[i-firstLen][1]);
            ans= max(ans,pre[i][1]+dp[i-secondLen][0]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}