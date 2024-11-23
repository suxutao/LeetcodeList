#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    string subStrHash(string s, ll power, ll modulo, ll k, ll hashValue) {
        ll n=s.size(),p=1;
        string ans;
        vector<ll>v(n+1);
        for (int i = n-1; i >= n-k; --i) {
            p=(p*power)%modulo;
            v[i]=(v[i+1]*power+s[i]-'a'+1)%modulo;
        }
        if (v[n-k]==hashValue) {
            ans=s.substr(n-k, k);
        }
        for (int i = n-k-1; i >= 0; --i) {
            v[i]=(v[i+1]*power+s[i]-'a'+1)%modulo;
            if (((v[i]-v[i+k]*p)%modulo+modulo)%modulo==hashValue)
                ans=s.substr(i,k);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}