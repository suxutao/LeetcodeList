#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int ans=INT_MAX,n=nums.size();
        for (int i = 0; i < n; ++i) {
            ans= min(ans,abs(nums[i]-k));
            for (int j = i-1; j >=0&&(nums[i]|nums[j])!=nums[j] ; --j) {
                nums[j]|=nums[i];
                ans= min(ans,abs(nums[j]-k));
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}