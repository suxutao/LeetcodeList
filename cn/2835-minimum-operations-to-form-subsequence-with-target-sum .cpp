#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums, int target) {
        if (accumulate(nums.begin(), nums.end(),0ll)<target)
            return -1;
        int arr[32]{},ans=0,i=0;
        long long s = 0;
        for (auto &i: nums){
            arr[__builtin_ctz(i)]++;
        }
        while ((1ll << i) <= target) {
            s += (long long) arr[i] << i;
            int mask = (1ll << ++i) - 1;
            if (s >= (target & mask)) {
                continue;
            }
            ans++;
            for (; arr[i] == 0; i++) {
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}