#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        ranges::sort(nums);
        vector<vector<int>>ans;
        for (int i = 0; i < nums.size(); i+=3) {
            if (nums[i+2]-nums[i]>k){
                return {};
            }
            ans.push_back({nums[i],nums[i+1],nums[i+2]});
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}