#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int countHousePlacements(int n) {
        vector<ll>v(n+1);
        v[0]=1;v[1]=2;
        for (int i = 2; i <= n; ++i) {
            v[i]=(v[i-1]+v[i-2])%N;
        }
        return v[n]*v[n]%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}