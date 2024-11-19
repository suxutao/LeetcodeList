#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        return accumulate(nums.begin(),nums.end(),0,bit_xor<>());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}