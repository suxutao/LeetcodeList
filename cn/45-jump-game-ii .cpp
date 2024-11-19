#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size()==1)
            return 0;
        int ans=0,fanwei=0,future=0;
        for (int i = 0; i < nums.size(); ++i) {
            fanwei= max(fanwei,i+nums[i]);
            if (i==future){
                ans++;
                fanwei= max(fanwei,i+nums[i]);
                future=fanwei;
                if (fanwei>=nums.size()-1)
                    break;
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