#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int ans=0,n=nums.size();
        for (int i = 0; i < n; ++i) {
            bool b= true;
            if (i-k>=0&&nums[i-k]>=nums[i])
                b= false;
            if (i+k<n&&nums[i+k]>=nums[i])
                b= false;
            if (b)
                ans+=nums[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}