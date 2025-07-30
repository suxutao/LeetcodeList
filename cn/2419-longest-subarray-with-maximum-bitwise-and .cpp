#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx=ranges::max(nums),ans=1,cnt=nums[0]==mx;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i]==mx){
                cnt++;
                ans= max(ans,cnt);
            }else{
                cnt=0;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}