#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long beautifulSubarrays(vector<int>& nums) {
        nums.insert(nums.begin(),0);
        ll ans=0,n=nums.size(),t=0;
        unordered_map<int,int>m;
        ++m[t];
        for (int i = 1; i < n; ++i) {
            ++m[t^=nums[i]];
        }
        for (auto &[_,a]: m){
            ans+=(ll)(a-1)*a/2;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}