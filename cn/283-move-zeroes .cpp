#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fast=0,slow=0;
        while (fast<nums.size()){
            while (slow<nums.size()&&nums[slow]){
                slow++;
            }
            if (slow==nums.size())
                return;
            else
                fast=slow+1;
            while (fast<nums.size()&&!nums[fast]){
                fast++;
            }
            if (fast==nums.size())
                return;
            nums[slow++]=nums[fast++];
            nums[fast-1]=0;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}