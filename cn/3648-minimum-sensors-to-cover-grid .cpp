#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSensors(int n, int m, int k) {
        return ceil((double)n/(k*2+1))*ceil((double)m/(k*2+1));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}