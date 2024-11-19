#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        std::sort(prices.begin(), prices.end());
        int a=-prices[0]-prices[1]+money;
        return a<0?money:a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}