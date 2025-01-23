#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int possibleStringCount(string word, int k) {
        int cnt=0;char c=word[0];
        vector<ll>v;
        word.push_back('?');
        for (auto &i: word){
            if (i!=c){
                v.push_back(cnt);
                c=i;
                cnt=1;
            }else{
                cnt++;
            }
        }
        ll n=v.size(),ji=1,ans=0;
        for (int i = 0; i < n; ++i) {
            ji=ji*v[i]%N;
            --v[i];
        }
        if (k<=n){
            return ji;
        }else{
            k-=n+1;
        }
        vector<ll>dp(k+2);
        dp[0]=1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= k; ++j) {
                dp[j+1]=(dp[j+1]+dp[j])%N;
            }
            for (int j = k; j > v[i]; --j) {
                dp[j]=(dp[j]-dp[j-v[i]-1])%N;
            }
        }
        for (int i = 0; i <= k; ++i) {
            ans=(ans+dp[i])%N;
        }
        return ((ji-ans)%N+N)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}