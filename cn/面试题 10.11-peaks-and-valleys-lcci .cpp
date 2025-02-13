#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        ranges::sort(nums);
        for (int i = 0; i < n-(n&1); i+=2) {
            swap(nums[i],nums[i+1]);
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}