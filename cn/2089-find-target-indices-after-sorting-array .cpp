#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        vector<int>v;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]==target)
                v.push_back(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}