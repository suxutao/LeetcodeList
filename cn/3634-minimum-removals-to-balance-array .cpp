#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        ranges::sort(nums);
        int l=0,r=ranges::upper_bound(nums,(long long)nums[0]*k)-nums.begin();
        int ans=r-l;
        while (r<n){
            ++l;
            while (r<n&&(long long)nums[l]*k>=nums[r]){
                ++r;
                ans= max(ans,r-l);
            }
        }
        return n-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}