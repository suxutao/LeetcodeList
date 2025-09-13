#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll=long long;
    int maxPossibleScore(vector<int>& start, int d) {
        int n=start.size();
        ranges::sort(start);
        ll l=0,r=start[n-1]-start[0]+d+1;
        auto check=[&](ll x)->bool{
            ll qi=start[0];
            for (int i = 1; i < n; ++i) {
                if (qi+x<start[i]){
                    qi=start[i];
                }else if (qi+x>start[i]+d){
                    return false;
                }else{
                    qi+=x;
                }
            }
            return true;
        };
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