#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countQuadruplets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<ll>>great(n,vector<ll>(n+1)),less(n,vector<ll>(n+1));
        for (int k = n-2; k >= 2; --k) {
            great[k]=great[k+1];
            for (int i = 1; i < nums[k + 1]; ++i) {
                ++great[k][i];
            }
        }
        for (int j = 1; j < n - 2; ++j) {
            less[j]=less[j-1];
            for (int i = nums[j - 1]+1; i <= n; ++i) {
                ++less[j][i];
            }
        }
        ll ans=0;
        for (int j = 1; j < n - 2; ++j) {
            for (int k = j+1; k < n - 1; ++k) {
                if (nums[j]>nums[k])
                    ans+=less[j][nums[k]]*great[k][nums[j]];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}