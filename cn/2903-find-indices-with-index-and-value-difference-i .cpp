#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        if (nums.size()<=indexDifference)
            return {-1,-1};
        for (int i = 0; i < nums.size() - indexDifference; ++i) {
            for (int j = i+indexDifference; j < nums.size(); ++j) {
                if (abs(nums[i]-nums[j])>=valueDifference)
                    return {i,j};
            }
        }
        return {-1,-1};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}