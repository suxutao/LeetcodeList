#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    ll c(ll x){
        if (x<0)
            return 0;
        return x*(x-1)/2;
    }
    long long distributeCandies(int n, int limit) {
        if (limit*3<n)
            return 0;
        return c(n+2)-3*c(n-limit+1)+3* c(n-2*limit)- c(n-3*limit-1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}