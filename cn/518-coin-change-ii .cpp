#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        if (amount==0)
            return 1;
        vector<int> v(amount + 1, 0);
        for (int i = 0; i < coins.size(); i++) {
            for (int j = coins[i]; j <= amount; j++) {
                if (j==coins[i])
                    v[j]++;
                v[j] += v[j - coins[i]];
            }
        }
        return v[amount];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}