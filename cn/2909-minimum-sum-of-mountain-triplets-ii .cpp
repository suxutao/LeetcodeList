#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size(),ans=INT_MAX;
        vector<int>pre(n),suf(n);
        pre[0]=nums[0];suf[n-1]=nums[n-1];
        for (int i = 1; i < n; ++i) {
            pre[i]= min(pre[i-1],nums[i]);
        }
        for (int i = n-2; i >= 0; --i) {
            suf[i]= min(suf[i+1],nums[i]);
        }
        for (int i = 1; i < n - 1; ++i) {
            if (nums[i]>pre[i-1]&&nums[i]>suf[i+1]){
                ans= min(ans,pre[i-1]+nums[i]+suf[i+1]);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}