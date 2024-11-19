#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    ll fast(ll a,ll n){
        ll ans=1;
        while (n){
            if (n&1)
                ans=(ans*a)%N;
            a=(a*a)%N;
            n>>=1;
        }
        return ans;
    }
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<ll>num(1,1),v(queries.size());
        for (int i = 0; i < 32; ++i) {
            if ((n>>i)&1)
                num.push_back(1<<i);
        }
        for (int i = 1; i < num.size(); ++i) {
            num[i]=(num[i]*num[i-1])%N;
        }
        for (int i = 0; i < v.size(); ++i) {
            v[i]=num[queries[i][1]+1]* fast(num[queries[i][0]],N-2)%N;
        }
        return vector<int>(v.begin(),v.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}