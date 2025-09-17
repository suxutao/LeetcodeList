#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        ranges::sort(nums,greater<>());
        ans.push_back(nums[0]);
        for (int i = 1; i < n; ++i) {
            if (ans.size()==k)
                break;
            if (nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}