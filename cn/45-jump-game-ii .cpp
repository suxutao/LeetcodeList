#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0,end=0,bound=0,n=nums.size();
        for (int i = 0; i < n-1; ++i) {
            bound= max(bound,i+nums[i]);
            if (end==i){
                end=bound;
                ans++;
            }
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