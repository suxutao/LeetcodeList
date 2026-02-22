#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countSubarrays(vector<int>& nums, long long k) {
        ll n=nums.size(),l=0,r=0,ans=0;
        multiset<ll>s;
        while (r<n){
            s.insert(nums[r]);
            while ((*s.rbegin()-*s.begin())*(r-l+1)>k){
                s.extract(nums[l++]);
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