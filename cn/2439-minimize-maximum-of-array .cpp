#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int minimizeArrayValue(vector<int>& nums) {
        ll l=0,r=*max_element(nums.begin(), nums.end())+1,mid;
        auto check=[&](int x){
            if (x<nums[0])
                return true;
            ll temp=0;
            for (int i = nums.size()-1; i >= 0; --i) {
                if (nums[i]>x){
                    temp+=nums[i]-x;
                }else{
                    temp= max(0ll,temp-x+nums[i]);
                }
            }
            return temp>0;
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