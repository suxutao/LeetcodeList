#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findClosest(int x, int y, int z) {
        x= abs(x-z);
        y= abs(y-z);
        if (x<y)
            return 1;
        else if (x==y)
            return 0;
        return 2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}