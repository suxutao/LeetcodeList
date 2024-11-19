#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCount(vector<int>& coins) {
        int ans=0;
        for (int i = 0; i < coins.size(); ++i) {
            ans+= ceil(coins[i]/2.0);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}