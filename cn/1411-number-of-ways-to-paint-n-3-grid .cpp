#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int numOfWays(int n) {
        long long dp1=6,dp2=6,new_dp1,new_dp2;
        for (int i = 1; i < n; ++i) {
            new_dp1=(2*dp1+2*dp2)%N;
            new_dp2=(2*dp1+3*dp2)%N;
            dp1=new_dp1;
            dp2=new_dp2;
        }
        return (dp1+dp2)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}