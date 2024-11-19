#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans,t=0;
        for (int i = 0; i < k; ++i) {
            t+=nums[i];
        }
        ans=t/k;
        for (int i = k; i < nums.size(); ++i) {
            t+=nums[i]-nums[i-k];
            ans= max(ans,t/k);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}