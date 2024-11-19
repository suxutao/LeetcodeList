#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        auto check=[&](double a){
            int temp=0;
            for (auto &i: nums){
                temp+=ceil(i/a);
            }
            return temp<=threshold;
        };
        int l=1,r=1e6;
        while (l<r){
            int mid=(l+r)>>1;
            if (!check(mid)){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}