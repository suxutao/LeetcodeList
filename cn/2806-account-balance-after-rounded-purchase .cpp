#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        if (purchaseAmount%10==0)
            return 100-purchaseAmount;
        else
            return 100-round(purchaseAmount/10.)*10;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}