#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long flowerGame(int n, int m) {
        return (ll)(n/2)*(m-m/2)+(ll)(m/2)*(n-n/2);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}