#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumTripletValue(vector<int>& nums) {
        ll ans=0,MAX=0;
        set<ll>s;s.insert(nums[0]);
        for (int i = 1; i < nums.size(); ++i) {
            s.insert(nums[i]);
            ans= max(ans,MAX*nums[i]);
            MAX= max(MAX,*s.rbegin()-nums[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}