#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minCuttingCost(int n, int m, int k) {
        ll ans=0;
        if (n>k){
            ans+=((ll)n-k)*k;
        }
        if (m>k){
            ans+=((ll)m-k)*k;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}