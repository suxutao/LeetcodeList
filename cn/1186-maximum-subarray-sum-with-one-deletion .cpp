#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int dp[100005][2]{};
    int maximumSum(vector<int>& arr) {
        if (arr.size()==1)
            return arr[0];
        dp[0][0]=arr[0];
        int ans=INT_MIN;
        for (int i = 1; i < arr.size(); ++i) {
            dp[i][0]= max(dp[i-1][0],0)+arr[i];
            dp[i][1]= max(dp[i-1][1]+arr[i],dp[i-1][0]);
            ans= max({ans,dp[i][0],dp[i][1]});
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}