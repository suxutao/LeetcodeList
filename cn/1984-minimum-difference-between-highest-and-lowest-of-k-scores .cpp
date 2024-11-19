#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (nums.size()==1)
            return 0;
        std::sort(nums.begin(), nums.end());
        int ans=INT_MAX,left=0,right=k-1;
        while (right<nums.size()){
            ans= min(ans,nums[right]-nums[left]);
            left++;right++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}