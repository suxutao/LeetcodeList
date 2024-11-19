#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    vector<ll>inv,jie;
    ll fast(ll a,ll x){
        ll ans=1;
        while (x){
            if (x&1)
                ans=ans*a%N;
            a=a*a%N;
            x>>=1;
        }
        return ans;
    }
    ll cal(string&s){
        ll ans=jie[s.size()];
        unordered_map<int,int>m;
        for (auto &item: s)
            ++m[item];
        for (auto &[a,b]: m)
            ans=ans*inv[b]%N;
        return ans;
    }
    int countAnagrams(string s) {
        ll ans=1,n=s.size();
        string temp;
        stringstream ss(s);
        inv.resize(n+1);
        jie.resize(n+1);
        inv[1]=1;jie[1]=1;
        for (int i = 2; i <= n; ++i) {
            jie[i]=jie[i-1]*i%N;
            inv[i]=fast(jie[i],N-2);
        }
        while (getline(ss,temp,' ')){
            ans=ans*cal(temp)%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}