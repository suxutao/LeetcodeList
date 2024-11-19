#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if (jug2Capacity+jug1Capacity<targetCapacity)
            return false;
        int MIN=__gcd(jug1Capacity,jug2Capacity);
        return targetCapacity%MIN==0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}