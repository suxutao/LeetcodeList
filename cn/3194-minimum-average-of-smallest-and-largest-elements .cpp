#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        double ans=INT_MAX;
        for (int i = 0; i < n / 2; ++i) {
            ans= min(ans,(nums[i]+nums[n-i-1])/2.);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}