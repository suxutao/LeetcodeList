#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),end=0,ans=0,pre=0;
        while (end<n-1){
            int temp=end;
            for (int i = pre; i <= temp; ++i) {
                end= max(end,i+nums[i]);
            }
            pre=temp+1;
            ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={2,3,1,1,4};
    Solution().jump(v);
    return 0;
}