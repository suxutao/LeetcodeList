#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    ll fast(ll x,ll n,ll p){
        ll ans=1;
        while (n){
            if (n&1)
                ans=(ans*x)%p;
            x=(x*x)%p;
            n>>=1;
        }
        return ans%p;
    }
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int>v;
        for (int i = 0; i < variables.size(); ++i) {
            ll a=variables[i][0],b=variables[i][1],c=variables[i][2],d=variables[i][3];
            int res= fast(fast(a,b,10),c,d);
            if (res==target)
                v.push_back(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}