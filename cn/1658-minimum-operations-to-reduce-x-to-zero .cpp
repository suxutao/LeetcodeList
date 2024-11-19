#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int ans=-1,l=0,r=0,n=nums.size(),sum=0;
        int mu=accumulate(nums.begin(), nums.end(),0)-x;
        if (mu<0)
            return -1;
        while (r<n){
            sum+=nums[r];
            while (sum>mu){
                sum-=nums[l++];
            }
            if (sum==mu){
                ans= max(ans,r-l+1);
            }
            ++r;
        }
        return ~ans?n-ans:-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}