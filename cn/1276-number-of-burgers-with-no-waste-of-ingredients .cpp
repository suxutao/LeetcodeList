#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if (tomatoSlices&1)
            return {};
        int tomata=tomatoSlices/2-cheeseSlices,cheese=2*cheeseSlices-tomatoSlices/2;
        if (tomata<0||cheese<0)
            return {};
        return {tomatoSlices/2-cheeseSlices,2*cheeseSlices-tomatoSlices/2};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}