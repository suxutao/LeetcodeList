#include "../../../stdc.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getMaximumConsecutive(vector<int> &coins) {
        int ans=1;
        sort(coins.begin(), coins.end());
        for (int i = 0; i < coins.size(); ++i) {
            if (coins[i]<=ans){
                ans+=coins[i];
            }else{
                break;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {

    return 0;
}