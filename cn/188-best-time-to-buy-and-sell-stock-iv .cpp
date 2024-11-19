#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if (prices.size()==1)
            return 0;
        vector<vector<int>>v(prices.size(),vector<int>(2*k+1,0));
        for (int i = 0; i <= 2*k; ++i) {
            if (i&1)
                v[0][i]=-prices[0];
        }
        for (int i = 1; i < prices.size(); ++i) {
            for (int j = 0; j < 2 * k + 1; ++j) {
                if (j==0){
                    v[i][0]= v[i-1][0];
                    continue;
                }
                if (j&1){
                    v[i][j]= max(v[i-1][j],v[i-1][j-1]-prices[i]);
                }else{
                    v[i][j]= max(v[i-1][j],v[i-1][j-1]+prices[i]);
                }
            }
        }
        return v[prices.size()-1][2*k];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}