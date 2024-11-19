#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>v(nums.size());
        for (int i = 0; i < v.size(); ++i) {
            v[i]=nums[nums[i]];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}