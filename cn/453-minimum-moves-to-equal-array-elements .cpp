#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int MIN= *std::min_element(nums.begin(), nums.end());
        int ans=0;
        for (auto &item: nums){
            ans+=item-MIN;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}