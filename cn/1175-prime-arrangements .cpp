#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    bool pan(int n){
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n%i==0)
                return false;
        }
        return true;
    }
    int numPrimeArrangements(int n) {
        int cnt=n;long long ans=1;
        for (int i = 2; i <= n; ++i) {
            cnt-=pan(i);
        }
        for (int i = 2; i <= cnt; ++i) {
            ans=(ans*i)%N;
        }
        for (int i = 2; i <= n-cnt; ++i) {
            ans=(ans*i)%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}