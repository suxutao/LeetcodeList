#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumSubarraySum(vector<int>& nums, int k) {
        ll sum=0,ans=0;
        unordered_map<int,int>m;
        for (int i = 0; i < k; ++i) {
            ++m[nums[i]];
            sum+=nums[i];
        }
        if (m.size()==k)
            ans=sum;
        for (int i = k; i < nums.size(); ++i) {
            sum+=nums[i]-nums[i-k];
            --m[nums[i-k]];
            if (!m[nums[i-k]])
                m.erase(nums[i-k]);
            ++m[nums[i]];
            if (m.size()==k)
                ans= max(ans,sum);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}