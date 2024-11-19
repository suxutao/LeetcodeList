#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> vv;
    vector<int> v;
    void hui (vector<int>& nums, vector<bool>& u) {
        if (v.size() == nums.size()) {
            vv.push_back(v);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (u[i]) continue;
            v.push_back(nums[i]);
            u[i] = true;
            hui(nums, u);
            u[i] = false;
            v.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> u(nums.size(), false);
        hui(nums, u);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}