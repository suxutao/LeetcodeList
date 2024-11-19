#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        unordered_map<int,int>m={{0,-1}};
        int sum=0,ans=0,you=-1;
        for (int i = 0; i < nums.size(); ++i) {
            sum+=nums[i];
            if (m.contains(sum-target)&&m[sum-target]>=you){
                ++ans;
                you=i;
            }
            m[sum]=i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{-2,6,6,3,5,4,1,2,8};
    Solution().maxNonOverlapping(v,10);
    return 0;
}