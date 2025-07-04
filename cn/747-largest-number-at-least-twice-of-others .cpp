#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for (int i = 0; i < n; ++i) {
            m[nums[i]]=i;
        }
        ranges::sort(nums,greater<>());
        return nums[0]>=2*nums[1]?m[nums[0]]:-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}