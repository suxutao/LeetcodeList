#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minChanges(vector<int>& nums, int k) {
        int n=nums.size(),ans=n/2,t;
        vector<int>v(n/2);
        unordered_map<int,int>m;
        for (int i = 0; i < n / 2; ++i) {
            if (nums[i]>nums[n-i-1])
                swap(nums[i],nums[n-i-1]);
            v[i]=max(k-nums[i],nums[n-i-1]);
            ++m[nums[n-i-1]-nums[i]];
        }
        sort(v.begin(), v.end());
        for (auto &[a,b]: m){
            t=lower_bound(v.begin(), v.end(),a)-v.begin();
            ans=min(ans, t+n/2-b);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={9,2,7,7,8,9,1,5,1,9,4,9,4,7};
    Solution().minChanges(v,9);
    return 0;
}