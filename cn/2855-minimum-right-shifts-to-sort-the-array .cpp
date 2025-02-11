#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n=nums.size(),ans=0;
        bool b= false;
        for (int i = 1; i < n; ++i) {
            if (nums[i]<nums[i-1]){
                if (b)
                    return -1;
                b=true;
                ans=n-i;
            }
        }
        return b&&nums.back()>nums.front()?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}