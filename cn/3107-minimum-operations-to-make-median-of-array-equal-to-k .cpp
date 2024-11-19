#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        int n=nums.size();ll ans=0;
        sort(nums.begin(), nums.end());
        int pos1= upper_bound(nums.begin(), nums.end(),k)-nums.begin();
        int pos2= lower_bound(nums.begin(), nums.end(),k)-nums.begin();
        for (int i = pos1; i <= n / 2; ++i) {
            ans+=nums[i]-k;
        }
        for (int i = n/2; i < pos2; ++i) {
            ans+=k-nums[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}