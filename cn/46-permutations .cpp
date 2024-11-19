#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> vv;
    vector<int> v;
    void hui (vector<int>& nums, vector<bool>& used) {
        if (v.size() == nums.size()) {
            vv.push_back(v);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;
            v.push_back(nums[i]);
            used[i] = true;
            hui(nums, used);
            used[i] = false;
            v.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(), false);
        hui(nums, used);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={1,2,3};
    Solution().permute(v);
    return 0;
}