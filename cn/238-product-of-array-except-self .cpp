#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n),zuo(n),you(n);
        zuo[0]=nums[0];you[n-1]=nums[n-1];
        for (int i = 1; i < n; ++i) {
            zuo[i]=zuo[i-1]*nums[i];
        }
        for (int i = n-2; i >= 0; --i) {
            you[i]=you[i+1]*nums[i];
        }
        ans[0]=you[1];ans[n-1]=zuo[n-2];
        for (int i = 1; i < n-1; ++i) {
            ans[i]=zuo[i-1]*you[i+1];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}