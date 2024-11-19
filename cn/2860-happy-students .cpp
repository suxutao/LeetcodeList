#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size(),ans=1;
        for (int i = 0; i <= n; ++i) {
            auto low=lower_bound(nums.begin(), nums.end(),i)-nums.begin();
            auto high=upper_bound(nums.begin(), nums.end(),i)-nums.begin();
            if (low<i&&high>i){
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