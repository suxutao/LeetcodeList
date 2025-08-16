#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxRunTime(int n, vector<int>& batteries) {
        int m=batteries.size();
        ranges::sort(batteries,greater<>());
        auto check=[&](ll x)->bool{
            int cl=0,i=0;
            ll pre=0;
            for (i = 0; i < n && cl < m; ++i) {
                if (batteries[cl]>=x){
                    ++cl;
                }else{
                    ll temp=x-pre;
                    while (temp>0&&cl<m){
                        temp-=batteries[cl++];
                    }
                    if (temp>0)
                        break;
                    pre=-temp;
                }
            }
            return i==n;
        };
        ll l=0,r=accumulate(batteries.begin(), batteries.end(),0ll)+1;
        while (l<r){
            ll mid=(l+r)>>1;
            if (check(mid)){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return l-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}