#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int maximumTastiness(vector<int>& price, int k) {
        ll l=0,r=*max_element(price.begin(),price.end())+1,mid;
        sort(price.begin(), price.end());
        auto check=[&](ll x){
            ll temp=price[0],p=0;
            for (int i = 0; i < k-1; ++i) {
                auto pos=lower_bound(price.begin()+p+1, price.end(),temp+x);
                if (pos==price.end())
                    return false;
                p=pos-price.begin();
                temp=*pos;
            }
            return true;
        };
        while (l<r){
            mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}