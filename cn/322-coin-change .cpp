#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> v(amount + 1, INT_MAX);
        v[0] = 0;
        for (int i = 0; i < coins.size(); i++) {
            for (int j = coins[i]; j <= amount; j++) {
                if (v[j - coins[i]] != INT_MAX)
                    v[j] = min(v[j - coins[i]] + 1, v[j]);
            }
        }
        if (v[amount] == INT_MAX)
            return -1;
        return v[amount];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}