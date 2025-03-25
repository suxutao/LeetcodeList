#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        return min(n*n,maxWeight/w);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}