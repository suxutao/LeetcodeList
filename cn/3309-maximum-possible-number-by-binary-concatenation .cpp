#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxGoodNumber(vector<int>& nums) {
        int arr[6]{};
        unordered_map<int,int>wei;
        for (int i = 0; i < 3; ++i) {
            wei[nums[i]]=32-__builtin_clz(nums[i]);
        }
        for (int i = 0; i < 6; ++i) {
            arr[i]=nums[0]<<(wei[nums[1]]+wei[nums[2]])|nums[1]<<wei[nums[2]]|nums[2];
            next_permutation(nums.begin(), nums.end());
        }
        return ranges::max(arr);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}