#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int o=0,z=0,ans=0;
        unordered_map<int,int>m={{0,-1}};
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i])
                ++o;
            else
                ++z;
            if (m.contains(o-z))
                ans= max(ans,i-m[o-z]);
            else
                m[o-z]=i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}