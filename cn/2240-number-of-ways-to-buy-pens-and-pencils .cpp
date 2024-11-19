#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        ll ans=0;
        for (int i = 0; i <= total; i+=cost1) {
            ans+=(total-i)/cost2+1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}