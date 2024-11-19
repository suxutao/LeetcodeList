#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l=0,r=nums.back()-nums[0]+1,mid;
        auto check=[&](int x){
            int temp=0;
            for (int i = 0; i < nums.size(); ++i) {
                int j= lower_bound(nums.begin(),nums.begin()+i,nums[i]-x)-nums.begin();
                temp+=i-j;
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