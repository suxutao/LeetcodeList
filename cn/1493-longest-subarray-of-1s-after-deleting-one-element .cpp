#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,cnt=0,ans=0,n=nums.size();
        while (r<n){
            cnt+=nums[r]==0;
            while (cnt>1)
                cnt-=nums[l++]==0;
            ans= max(ans,r-l);
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}