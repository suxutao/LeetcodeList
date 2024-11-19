#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long repairCars(vector<int>& ranks, int cars) {
        ll l=1,r=LONG_LONG_MAX-2;
        auto check=[&](ll x){
            ll temp=0;
            for (auto &i: ranks){
                temp+=sqrt(x/i);
            }
            return temp<cars;
        };
        while (l<r){
            ll mid=(l+r)>>1;
            if (check(mid)){
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