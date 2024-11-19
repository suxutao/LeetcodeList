#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minimumTime(vector<int>& time, int totalTrips) {
        ll l=1,r=1e14;
        auto check=[&](ll a){
            ll temp=0;
            for (auto &i: time){
                temp+=a/i;
            }
            return temp>=totalTrips;
        };
        while (l<r){
            ll mid=(l+r)>>1;
            if (!check(mid))
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