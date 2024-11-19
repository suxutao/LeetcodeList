#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int inventoryManagement(vector<int>& stock) {
        sort(stock.begin(), stock.end());
        return stock[stock.size()/2];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}