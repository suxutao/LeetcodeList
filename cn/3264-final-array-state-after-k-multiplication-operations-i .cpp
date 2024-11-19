#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; ++i) {
            auto it=min_element(nums.begin(), nums.end());
            *it*=multiplier;
        }
        return nums;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}