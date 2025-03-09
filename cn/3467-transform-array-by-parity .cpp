#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for (int i = 0; i < n; ++i) {
            if (nums[i]&1)
                ans[i]=1;
        }
        ranges::sort(ans);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}