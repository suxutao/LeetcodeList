#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size(),time=0;
        nums.push_back(nums[0]);
        for (int i = 0; i < n; ++i) {
            if (nums[i+1]<nums[i]){
                time++;
            }
        }
        return time<2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}