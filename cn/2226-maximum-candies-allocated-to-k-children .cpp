#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int maximumCandies(vector<int>& candies, long long k) {
        ll sum=accumulate(candies.begin(), candies.end(),0ll);
        if (sum<k)
            return 0;
        ll l=1,r=*max_element(candies.begin(), candies.end())+1;
        auto check=[&](ll x){
            ll temp=0;
            for (auto &i: candies){
                temp+=i/x;
            }
            return temp>=k;
        };
        while (l<r){
            ll mid=(l+r)>>1;
            if (check(mid)) {
                l=mid+1;
            }else
                r=mid;
        }
        return l-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}