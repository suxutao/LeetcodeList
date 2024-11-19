#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long incremovableSubarrayCount(vector<int>& nums) {
        ll ans,n=nums.size(),l=0;
        while (l<n-1&&nums[l+1]>nums[l])
            ++l;
        if (l==n-1)
            return (n+1)*n/2;
        ans=l+2;
        for (int r = n-1; r>0; --r) {
            if (r<n-1&&nums[r]>=nums[r+1])
                break;
            while (l>=0&&nums[l]>=nums[r])
                --l;
            ans+=l+2;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}