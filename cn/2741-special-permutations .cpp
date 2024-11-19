#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int specialPerm(vector<int>& nums) {
        int n=nums.size();
        ll ans=0;
        vector<vector<ll>>v((1<<n)-1,vector<ll>(n));
        fill(v[0].begin(), v[0].end(),1);
        for (int i = 1; i < (1 << n)-1; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i>>j&1)
                    continue;
                for (int k = 0; k < n; ++k) {
                    if ((i>>k&1)&&(nums[k]%nums[j]==0||nums[j]%nums[k]==0))
                        v[i][j]+=v[i^(1<<k)][k];
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            ans+=v[((1<<n)-1)^(1<<i)][i];
        }
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}