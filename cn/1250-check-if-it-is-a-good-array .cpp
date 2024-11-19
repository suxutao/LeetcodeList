#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int a=accumulate(nums.begin(), nums.end(),0, __gcd<int>);
        return a==1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}