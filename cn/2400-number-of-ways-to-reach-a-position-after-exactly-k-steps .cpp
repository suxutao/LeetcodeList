#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int numberOfWays(int startPos, int endPos, int k) {
        if ((endPos-startPos+k)&1||abs(endPos-startPos)>k)
            return 0;
        long long r=(abs(endPos-startPos)+k)/2,ans=1;
        vector<long long>inv(k+1);
        inv[1]=1;
        for (int i = 2; i <= k; ++i) {
            inv[i]=(N-N/i)*inv[N%i]%N;
        }
        for (int i = 1; i <= r; ++i) {
            ans=(ans*(k-i+1)%N*inv[i])%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}