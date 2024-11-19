#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int qi=0,ou=0;
        for (const auto &item: position){
            if (item&1)
                qi++;
            else
                ou++;
        }
        return min(qi,ou);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}