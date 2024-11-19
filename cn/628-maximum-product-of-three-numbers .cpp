#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int fu=0,zh=0,n=nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i]<0)
                fu++;
            if (nums[i]>0)
                zh++;
        }
        if (zh>=3){
            if (fu>=2)
                return max(nums[0]*nums[1]*nums[n-1],nums[n-3]*nums[n-2]*nums[n-1]);
            else
                return nums[n-3]*nums[n-2]*nums[n-1];
        }else if (zh>=1){
            if (fu>=2)
                return nums[0]*nums[1]*nums[n-1];
            else
                return nums[n-3]*nums[n-2]*nums[n-1];
        }else{
            return nums[n-3]*nums[n-2]*nums[n-1];
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}