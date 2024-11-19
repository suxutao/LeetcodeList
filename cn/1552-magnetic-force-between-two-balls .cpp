#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        ll l=0,r=position.back()+1,mid;
        auto check=[&](ll x){
            ll temp=position[0],p=0;
            for (int i = 0; i < m-1; ++i) {
                auto pos=lower_bound(position.begin()+p+1, position.end(),temp+x);
                if (pos==position.end())
                    return false;
                p=pos-position.begin();
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