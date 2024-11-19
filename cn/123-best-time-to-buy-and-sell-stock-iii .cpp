#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        vector<vector<int>> vv(prices.size(), vector<int>(5, 0));
        vv[0][1] = -prices[0];
        vv[0][3] = -prices[0];
        for (int i = 1; i < prices.size(); i++) {
            vv[i][0] = vv[i - 1][0];
            vv[i][1] = max(vv[i - 1][1], vv[i - 1][0] - prices[i]);
            vv[i][2] = max(vv[i - 1][2], vv[i - 1][1] + prices[i]);
            vv[i][3] = max(vv[i - 1][3], vv[i - 1][2] - prices[i]);
            vv[i][4] = max(vv[i - 1][4], vv[i - 1][3] + prices[i]);
        }
        return vv[prices.size() - 1][4];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}