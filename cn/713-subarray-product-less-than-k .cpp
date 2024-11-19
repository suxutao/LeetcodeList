#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k==0)
            return 0;
        ll ji=1;
        int ans=0,l=0,r=0,n=nums.size();
        while (r<n){
            ji*=nums[r];
            while (l<=r&&ji>=k){
                ji/=nums[l++];
            }
            ans+=r-l+1;
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}