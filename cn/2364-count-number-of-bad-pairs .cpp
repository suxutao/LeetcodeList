#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countBadPairs(vector<int>& nums) {
        ll n=nums.size(),ans=0;
        unordered_map<ll,ll>m;
        for (int i = 0; i < n; ++i) {
            ++m[nums[i]-i];
            ans+=m[nums[i]-i]-1;
        }
        return n*(n-1)/2-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}