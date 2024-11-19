#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        if (k==0)
            return nums[0];
        if (n==1&&k&1)
            return -1;
        if (k==1)
            return nums[1];
        if (k>n){
            return *max_element(nums.begin(),nums.end());
        }else{
            return max(*max_element(nums.begin(),nums.begin()+k-1),nums[k]);
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}