#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]%2==0)
                v.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]%2==1)
                v.push_back(nums[i]);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}