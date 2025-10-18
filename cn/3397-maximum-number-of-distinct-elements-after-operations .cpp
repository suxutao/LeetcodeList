#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        ranges::sort(nums);
        int n=nums.size(),ans=1,pre=nums[0]-k;
        for (int i = 1; i < n; ++i) {
            int t=pre+1;
            if (t<=nums[i]-k){
                pre=nums[i]-k;
                ans++;
            }else if (t<=nums[i]+k){
                pre++;
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}