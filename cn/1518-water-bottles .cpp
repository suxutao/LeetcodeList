#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles,kong;
        while (numBottles>=numExchange){
            ans+=numBottles/numExchange;
            kong=numBottles%numExchange;
            numBottles/=numExchange;
            numBottles+=kong;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}