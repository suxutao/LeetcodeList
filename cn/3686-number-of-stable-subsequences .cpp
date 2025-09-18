#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int countStableSubsequences(vector<int>& nums) {
        ll f[2][2]{},n=nums.size(),x;
        for (int i = 0; i < n; ++i) {
            x=nums[i]&1;
            f[x][1]=(f[x][0]+f[x][1])%N;
            f[x][0]=(f[x][0]+f[x^1][0]+f[x^1][1]+1)%N;
        }
        return (f[0][0]+f[0][1]+f[1][0]+f[1][1])%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}