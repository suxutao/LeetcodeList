#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size(),ans=0;
        unordered_map<int,int>m;
        for (int i = 0; i < n; ++i) {
            ++m[nums[i]];
            if (m[nums[i]-1])
                ans= max(ans,m[nums[i]]+m[nums[i]-1]);
            if (m[nums[i]+1])
                ans= max(ans,m[nums[i]]+m[nums[i]+1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}