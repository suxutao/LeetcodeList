#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int>dp(1<<n,INT_MAX);
        dp[0]=0;
        for (int i = 1; i < 1 << n; ++i) {
            int pos=__builtin_popcount(i);
            for (int j = 0; j < n; ++j) {
                if (i>>j&1){
                    dp[i]=min(dp[i],(nums1[pos-1]^nums2[j])+dp[i^(1<<j)]);
                }
            }
        }
        return dp.back();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}