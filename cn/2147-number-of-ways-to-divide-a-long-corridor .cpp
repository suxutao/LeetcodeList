#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int numberOfWays(string corridor) {
        int cnt= std::count(corridor.begin(), corridor.end(),'S');
        if (cnt&1||cnt==0)
            return 0;
        ll n=corridor.size(),yi=0,cao=1,ans=1,i;
        for (i = 0; yi<2; ++i) {
            yi+=corridor[i]=='S';
        }
        yi=0;
        for (; i < n; ++i) {
            if (corridor[i]=='S'){
                if (yi%2==0)
                    ans=ans*cao%N;
                yi++;cao=1;
            }else{
                if (yi%2==0)
                    cao++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}