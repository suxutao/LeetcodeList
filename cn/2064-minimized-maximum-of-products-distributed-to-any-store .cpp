#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int minimizedMaximum(int n, vector<int>& quantities) {
        ll l=1,r=*max_element(quantities.begin(),quantities.end())+1,mid;
        auto check=[&](ll x){
            ll temp=0;
            for (auto &i: quantities)
                temp+=ceil((double)i/x);
            return temp>n;
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