#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),fast=1,slow=0,cnt=1;
        while (fast<n){
            if (nums[fast]==nums[fast-1]){
                ++cnt;
            }else{
                if (cnt>=2){
                    nums[slow++]=nums[fast-1];
                    nums[slow++]=nums[fast-1];
                }else{
                    nums[slow++]=nums[fast-1];
                }
                cnt=1;
            }
            ++fast;
        }
        if (cnt>=2){
            nums[slow++]=nums[fast-1];
            nums[slow++]=nums[fast-1];
        }else{
            nums[slow++]=nums[fast-1];
        }
        return slow;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}