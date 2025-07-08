#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxValue(vector<vector<int>> &events, int k) {
        int n=events.size();
        vector<vector<int>>dp(n+1,vector<int>(k+1));
        ranges::sort(events,[](auto&a,auto&b){
            return a[1]<b[1];
        });
        for (int i = 0; i < n; ++i) {
            int p= lower_bound(events.begin(),events.end(),events[i][0],[](auto&a,int low){
                return a[1]<low;
            })-events.begin();
            for (int j = 1; j <= k; ++j) {
                dp[i+1][j]= max(dp[i][j],dp[p][j-1]+events[i][2]);
            }
        }
        return dp[n][k];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}