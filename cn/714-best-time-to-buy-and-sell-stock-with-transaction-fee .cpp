#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        if (prices.size()==1)
            return 0;
        vector<vector<int>>v(prices.size(),vector<int>(2,0));
        v[0][0]=-prices[0]-fee;v[0][1]=0;
        for (int i = 1; i < prices.size(); ++i) {
            v[i][0]= max(v[i-1][0],v[i-1][1]-prices[i]-fee);
            v[i][1]= max(v[i-1][1],v[i-1][0]+prices[i]);
        }
        return v[prices.size()-1][1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}