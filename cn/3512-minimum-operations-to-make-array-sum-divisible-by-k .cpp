#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=accumulate(nums.begin(), nums.end(),0);
        return sum%k;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}