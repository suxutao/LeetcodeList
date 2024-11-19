#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0,cnt=0,l=0,r=0,n=nums.size();
        while (r<n){
            cnt+=nums[r]==0;
            while (cnt>k)
                cnt-=nums[l++]==0;
            ans= max(ans,r-l+1);
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}