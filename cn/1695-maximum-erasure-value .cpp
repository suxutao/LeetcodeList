#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_multiset<int>s;
        int n=nums.size(),ans=0,l=0,r=0,sum=0;
        while (r<n){
            s.insert(nums[r]);
            sum+=nums[r];
            while (s.count(nums[r])>1)
                s.extract(nums[l]),sum-=nums[l++];
            ans= max(ans,sum);
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{5,2,1,2,5,2,1,2,5};
    Solution().maximumUniqueSubarray(v);
    return 0;
}