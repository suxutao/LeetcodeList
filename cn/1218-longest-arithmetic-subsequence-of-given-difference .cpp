#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int ans=0;
        unordered_map<int,int>dp;
        for (auto &i: arr){
            dp[i]=dp[i-difference]+1;
            ans= max(ans,dp[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}