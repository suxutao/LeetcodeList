#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool zeng= true,jian= true;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i]>nums[i-1])
                jian= false;
            if (nums[i]<nums[i-1])
                zeng= false;
            if (!jian&&!zeng)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}