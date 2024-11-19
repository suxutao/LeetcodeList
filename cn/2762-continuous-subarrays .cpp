#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long continuousSubarrays(vector<int>& nums) {
        ll ans=0,n=nums.size(),l=0,r=0;
        multiset<int>s;
        while (r<n){
            s.insert(nums[r]);
            while (*s.rbegin()-*s.begin()>2){
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