#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==1||nums.size()==2)
            return nums.size();
        int repeat=1,slow=1,fast=1;
        while(fast<nums.size()){
            if (nums[fast]==nums[fast-1]){
                if (repeat<2)
                    nums[slow++]=nums[fast++];
                else
                    fast++;
                repeat++;
            }else{
                nums[slow++]=nums[fast++];
                repeat=1;
            }
        }
        return slow;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}