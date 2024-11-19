#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n=books.size();
        vector<int>dp(n+1,INT_MAX/2);
        dp[0]=0;
        for (int i = 1; i <= n; ++i) {
            int MAX=0,wid=0;
            for (int j = i-1; j>=0; --j) {
                wid+=books[j][0];
                if (wid>shelfWidth)
                    break;
                MAX= max(MAX,books[j][1]);
                dp[i]= min(dp[i],dp[j]+MAX);
            }
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}