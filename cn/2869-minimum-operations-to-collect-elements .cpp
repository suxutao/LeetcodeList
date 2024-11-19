#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int>s;
        std::reverse(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]<=k)
                s.insert(nums[i]);
            if (s.size()==k)
                return i+1;
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}