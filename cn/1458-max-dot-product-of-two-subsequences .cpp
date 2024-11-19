#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size(),MAX=INT_MIN;
        vector<vector<int>>dp(n1+1,vector<int>(n2+1));
        bool fu=false;
        for (int i = 0; i < n1; ++i) {
            for (int j = 0; j < n2; ++j) {
                if (nums1[i]*nums2[j]>0){
                    fu=true;
                    break;
                }
                MAX= max(MAX,nums1[i]*nums2[j]);
            }
        }
        if (!fu)
            return MAX;
        for (int i = 1; i <= n1; ++i) {
            for (int j = 1; j <= n2; ++j) {
                dp[i][j]=max({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]+nums1[i-1]*nums2[j-1]});
            }
        }
        return dp[n1][n2];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}