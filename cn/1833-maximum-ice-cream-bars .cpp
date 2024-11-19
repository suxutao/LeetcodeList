#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int i;
        for (i = 0; i < costs.size(); ++i) {
            if (coins>=costs[i]){
                coins-=costs[i];
            }else{
                break;
            }
        }
        return i;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}