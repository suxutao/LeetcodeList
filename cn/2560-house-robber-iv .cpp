#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int minCapability(vector<int>& nums, int k) {
        ll l=1,r=*max_element(nums.begin(), nums.end()),mid;
        auto check=[&](int x){
            int temp=0;
            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i]<=x){
                    ++temp;++i;
                }
            }
            return temp<k;
        };
        while (l<r){
            mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}