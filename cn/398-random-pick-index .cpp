#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<int,vector<int>>m;
    Solution(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {
        return m[target][rand()%m[target].size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}