#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        long long l=0,r=*max_element(nums.begin(),nums.end())+1,mid;
        auto check=[&](long long x){
            if (x==0)
                return true;
            long long temp=0;
            for (auto &item: nums)
                temp+=(item-1)/x;
            return temp> maxOperations;
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