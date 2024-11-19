#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countSubarrays(vector<int>& nums, long long k) {
        ll ans=0,sum=0,l=0,r=0,n=nums.size();
        while (r<n){
            sum+=nums[r];
            while ((r-l+1)*sum>=k){
                sum-=nums[l++];
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