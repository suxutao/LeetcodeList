#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int l= upper_bound(nums.rbegin(), nums.rend(),0,greater<int>())-nums.rbegin();
        int r= upper_bound(nums.begin(), nums.end(),0)-nums.begin();
        return nums.size()-min(l,r);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}