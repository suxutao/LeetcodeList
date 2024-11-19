#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        vector<int>dp(n+1);
        int pos=0;
        sort(offers.begin(), offers.end(),[](vector<int>&a,vector<int>&b){
            if (a[1]==b[1])
                return a[0]<b[0];
            return a[1]<b[1];
        });
        for (auto &i: offers){
            i[0]++;i[1]++;
        }
        for (int i = 1; i <= n; ++i) {
            dp[i]=dp[i-1];
            while (pos<offers.size()&&offers[pos][1]<=i){
                dp[i]= max(dp[i],offers[pos][2]+dp[offers[pos][0]-1]);
                pos++;
            }
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}